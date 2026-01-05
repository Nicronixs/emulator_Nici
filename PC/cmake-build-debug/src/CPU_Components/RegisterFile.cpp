//
// Created by Ninco on 03.01.2026.
//

#include "RegisterFile.h"

RegisterFile::RegisterFile() {
    for (int i = 0; i < NUM_REGISTERS; i++) {
        for (int j = 0; j < 16; j++) {
            registers[i][j] = Input(false);
        }
    }
    for (int i = 0; i < 16; i++) {
        readOutput1[i] = Output(false);
        readOutput2[i] = Output(false);
    }
    for (int i = 0; i < 4; i++) {
        readAddress1[i] = Input(false);
        readAddress2[i] = Input(false);
        writeAddress[i] = Input(false);
    }
    for (int i = 0; i < 16; i++) {
        writeData[i] = Input(false);
    }
    writeEnable = false;
}

void RegisterFile::setReadAddress1(std::array<Input, 4> addr) {
    for (int i = 0; i < 4; i++) {
        readAddress1[i] = addr[i];
    }
}

void RegisterFile::setReadAddress2(std::array<Input, 4> addr) {
    for (int i = 0; i < 4; i++) {
        readAddress2[i] = addr[i];
    }
}

void RegisterFile::setWriteAddress(std::array<Input, 4> addr) {
    for (int i = 0; i < 4; i++) {
        writeAddress[i] = addr[i];
    }
}

void RegisterFile::setWriteData(std::array<Input, 16> data) {
    for (int i = 0; i < 16; i++) {
        writeData[i] = data[i];
    }
}

void RegisterFile::setWriteEnable(bool enable) {
    writeEnable = enable;
}

void RegisterFile::read() {
    int addr1 = 0;
    int addr2 = 0;
    
    for (int i = 0; i < 4; i++) {
        if (readAddress1[i].getValue()) {
            addr1 |= (1 << (3 - i));
        }
        if (readAddress2[i].getValue()) {
            addr2 |= (1 << (3 - i));
        }
    }
    
    addr1 = addr1 % NUM_REGISTERS;
    addr2 = addr2 % NUM_REGISTERS;
    
    for (int i = 0; i < 16; i++) {
        readOutput1[i].setValue(registers[addr1][i].getValue());
        readOutput2[i].setValue(registers[addr2][i].getValue());
    }
}

void RegisterFile::write() {
    if (!writeEnable) {
        return;
    }
    
    int addr = 0;
    for (int i = 0; i < 4; i++) {
        if (writeAddress[i].getValue()) {
            addr |= (1 << (3 - i));
        }
    }
    
    addr = addr % NUM_REGISTERS;
    
    for (int i = 0; i < 16; i++) {
        registers[addr][i] = writeData[i];
    }
}

std::array<Output, 16> RegisterFile::getReadOutput1() const {
    std::array<Output, 16> result;
    for (int i = 0; i < 16; i++) {
        result[i] = Output(readOutput1[i].getValue());
    }
    return result;
}

std::array<Output, 16> RegisterFile::getReadOutput2() const {
    std::array<Output, 16> result;
    for (int i = 0; i < 16; i++) {
        result[i] = Output(readOutput2[i].getValue());
    }
    return result;
}

