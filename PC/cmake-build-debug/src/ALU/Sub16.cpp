//
// Created by Ninco on 03.01.2026.
//

#include "Sub16.h"
#include "../Subtractors/FullSubtractor.h"

Sub16::Sub16(std::array<Input, 16> i1, std::array<Input, 16> i2) {
    for (int i = 0; i < 16; i++) {
        input1[i] = i1[i];
        input2[i] = i2[i];
        output[i] = Output(false);
    }
    borrowOut = false;
}

void Sub16::evaluate() {

    bool bin = false;
    for(int i = 15; i >= 0; --i) {
        FullSubtractor h(input1[i], input2[i], Input(bin));
        h.evaluate();
        output[i].setValue(h.getDif().getValue());
        bin = h.getBorrow().getValue();
    }
    borrowOut = bin;
}

Output* Sub16::getOutput() {
    return output;
}

bool Sub16::getBorrowOut() const {
    return borrowOut;
}

