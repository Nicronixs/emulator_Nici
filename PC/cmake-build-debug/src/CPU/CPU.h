//
// Created by Ninco on 03.01.2026.
//

#ifndef SRC_CPU_H
#define SRC_CPU_H

#include "../ALU/ALU.h"
#include "../CPU_Components/PC.h"
#include "../CPU_Components/IR.h"
#include "../CPU_Components/RegisterFile.h"
#include "../Memory/Memory.h"
#include "../Input_Output/Input.h"
#include "../Input_Output/Output.h"
#include <array>

class CPU {
private:
    ALU* alu;
    PC* pc;
    IR* ir;
    RegisterFile* registerFile;
    Memory* memory;

public:
    CPU();
    ~CPU();

    ALU* getALU() const;
    PC* getPC() const;
    IR* getIR() const;
    RegisterFile* getRegisterFile() const;
    Memory* getMemory() const;
};

#endif //SRC_CPU_H

