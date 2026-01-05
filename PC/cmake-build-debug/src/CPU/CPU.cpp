//
// Created by Ninco on 03.01.2026.
//

#include "CPU.h"

CPU::CPU() {
    alu = nullptr;
    pc = new PC();
    ir = new IR();
    registerFile = new RegisterFile();
    memory = new Memory();
}

CPU::~CPU() {
    if (alu != nullptr) {
        delete alu;
    }
    if (pc != nullptr) {
        delete pc;
    }
    if (ir != nullptr) {
        delete ir;
    }
    if (registerFile != nullptr) {
        delete registerFile;
    }
    if (memory != nullptr) {
        delete memory;
    }
}

ALU* CPU::getALU() const {
    return alu;
}

PC* CPU::getPC() const {
    return pc;
}

IR* CPU::getIR() const {
    return ir;
}

RegisterFile* CPU::getRegisterFile() const {
    return registerFile;
}

Memory* CPU::getMemory() const {
    return memory;
}

