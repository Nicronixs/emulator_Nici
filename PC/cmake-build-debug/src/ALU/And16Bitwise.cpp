//
// Created by Ninco on 03.01.2026.
//

#include "And16Bitwise.h"

And16Bitwise::And16Bitwise(std::array<Input, 16> i1, std::array<Input, 16> i2) {
    for (int i = 0; i < 16; i++) {
        input1[i] = i1[i];
        input2[i] = i2[i];
        output[i] = Output(false);
    }
}

void And16Bitwise::evaluate() {
    for (int i = 0; i < 16; i++) {
        And andGate(input1[i], input2[i]);
        bool result = andGate.evaluate();
        output[i].setValue(result);
    }
}

Output* And16Bitwise::getOutput() {
    return output;
}

