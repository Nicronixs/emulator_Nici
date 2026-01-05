//
// Created by Ninco on 03.01.2026.
//

#include "Not16Bitwise.h"

Not16Bitwise::Not16Bitwise(std::array<Input, 16> i) {
    for (int j = 0; j < 16; j++) {
        input[j] = i[j];
        output[j] = Output(false);
    }
}

void Not16Bitwise::evaluate() {
    for (int i = 0; i < 16; i++) {
        Not notGate(input[i]);
        bool result = notGate.not_();
        output[i].setValue(result);
    }
}

Output* Not16Bitwise::getOutput() {
    return output;
}

