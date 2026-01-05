//
// Created by Ninco on 03.01.2026.
//

#include "Or16Bitwise.h"

Or16Bitwise::Or16Bitwise(std::array<Input, 16> i1, std::array<Input, 16> i2) {
    for (int i = 0; i < 16; i++) {
        input1[i] = i1[i];
        input2[i] = i2[i];
        output[i] = Output(false);
    }
}

void Or16Bitwise::evaluate() {
    for (int i = 0; i < 16; i++) {
        Or orGate(input1[i], input2[i]);
        bool result = orGate.evaluate();
        output[i].setValue(result);
    }
}

Output* Or16Bitwise::getOutput() {
    return output;
}

