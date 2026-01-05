//
// Created by Ninco on 03.01.2026.
//

#include "ArithmeticUnit.h"

ArithmeticUnit::ArithmeticUnit(std::array<Input, 16> i1, std::array<Input, 16> i2, bool ctrl) {
    for (int i = 0; i < 16; i++) {
        input1[i] = i1[i];
        input2[i] = i2[i];
        output[i] = Output(false);
    }
    control = ctrl;
    add16 = nullptr;
    sub16 = nullptr;
}

void ArithmeticUnit::evaluate() {
    if (control == false) {
        add16 = new Add16(input1, input2);
        add16->evaluate();
        Output* result = add16->getOutput();
        for (int i = 0; i < 16; i++) {
            output[i].setValue(result[i].getValue());
        }
        delete add16;
        add16 = nullptr;
    } else {
        sub16 = new Sub16({input1[0], input1[1], input1[2], input1[3], input1[4], input1[5], input1[6], input1[7],
                          input1[8], input1[9], input1[10], input1[11], input1[12], input1[13], input1[14], input1[15]},
                         {input2[0], input2[1], input2[2], input2[3], input2[4], input2[5], input2[6], input2[7],
                          input2[8], input2[9], input2[10], input2[11], input2[12], input2[13], input2[14], input2[15]});
        sub16->evaluate();
        Output* result = sub16->getOutput();
        for (int i = 0; i < 16; i++) {
            output[i].setValue(result[i].getValue());
        }
        delete sub16;
        sub16 = nullptr;
    }
}

Output* ArithmeticUnit::getOutput() {
    return output;
}

void ArithmeticUnit::setControl(bool ctrl) {
    control = ctrl;
}

bool ArithmeticUnit::getControl() const {
    return control;
}

