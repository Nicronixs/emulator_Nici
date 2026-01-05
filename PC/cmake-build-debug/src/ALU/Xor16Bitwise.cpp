//
// Created by Ninco on 03.01.2026.
//

#include "Xor16Bitwise.h"

Xor16Bitwise::Xor16Bitwise(std::array<Input, 16> i1, std::array<Input, 16> i2) {
    for (int i = 0; i < 16; i++) {
        input1[i] = i1[i];
        input2[i] = i2[i];
        output[i] = Output(false);
    }
}

void Xor16Bitwise::evaluate() {
    for (int i = 0; i < 16; i++) {
        Xor xorGate(input1[i], input2[i]);
        bool result = xorGate.evaluate();
        output[i].setValue(result);
    }
}

Output* Xor16Bitwise::getOutput() {
    return output;
}

