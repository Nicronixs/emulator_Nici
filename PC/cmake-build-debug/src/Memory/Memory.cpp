//
// Created by Ninco on 03.01.2026.
//

#include "Memory.h"

Memory::Memory() {
    for (int i = 0; i < MEMORY_SIZE; i++) {
        for (int j = 0; j < 16; j++) {
            memory[i][j] = Input(false);
        }
    }
    for (int i = 0; i < 16; i++) {
        address[i] = Input(false);
        writeData[i] = Input(false);
        readOutput[i] = Output(false);
    }
    readEnable = false;
    writeEnable = false;
}

void Memory::setAddress(std::array<Input, 16> addr) {
    for (int i = 0; i < 16; i++) {
        address[i] = addr[i];
    }
}

void Memory::setWriteData(std::array<Input, 16> data) {
    for (int i = 0; i < 16; i++) {
        writeData[i] = data[i];
    }
}

void Memory::setReadEnable(bool enable) {
    readEnable = enable;
}

void Memory::setWriteEnable(bool enable) {
    writeEnable = enable;
}

void Memory::read() {
    if (!readEnable) {
        return;
    }
    
    int addr = 0;
    for (int i = 0; i < 16; i++) {
        if (address[i].getValue()) {
            addr |= (1 << (15 - i));
        }
    }
    
    addr = addr % MEMORY_SIZE;
    
    for (int i = 0; i < 16; i++) {
        readOutput[i].setValue(memory[addr][i].getValue());
    }
}

void Memory::write() {
    if (!writeEnable) {
        return;
    }
    
    int addr = 0;
    for (int i = 0; i < 16; i++) {
        if (address[i].getValue()) {
            addr |= (1 << (15 - i));
        }
    }
    
    addr = addr % MEMORY_SIZE;
    
    for (int i = 0; i < 16; i++) {
        memory[addr][i] = writeData[i];
    }
}

std::array<Output, 16> Memory::getReadOutput() const {
    std::array<Output, 16> result;
    for (int i = 0; i < 16; i++) {
        result[i] = Output(readOutput[i].getValue());
    }
    return result;
}

