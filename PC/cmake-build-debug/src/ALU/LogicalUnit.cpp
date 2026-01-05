//
// Created by Ninco on 03.01.2026.
//

#include "LogicalUnit.h"

LogicalUnit::LogicalUnit(std::array<Input, 16> i1, std::array<Input, 16> i2, int ctrl) {
    for (int i = 0; i < 16; i++) {
        input1[i] = i1[i];
        input2[i] = i2[i];
        output[i] = Output(false);
    }
    control = ctrl;
}

void LogicalUnit::evaluate() {
    std::array<Input, 16> arr1 = {input1[0], input1[1], input1[2], input1[3], input1[4], input1[5], input1[6], input1[7],
                                   input1[8], input1[9], input1[10], input1[11], input1[12], input1[13], input1[14], input1[15]};
    std::array<Input, 16> arr2 = {input2[0], input2[1], input2[2], input2[3], input2[4], input2[5], input2[6], input2[7],
                                   input2[8], input2[9], input2[10], input2[11], input2[12], input2[13], input2[14], input2[15]};
    
    Output* result = nullptr;
    
    switch(control) {
        case 0: {
            And16Bitwise and16(arr1, arr2);
            and16.evaluate();
            result = and16.getOutput();
            break;
        }
        case 1: {
            Or16Bitwise or16(arr1, arr2);
            or16.evaluate();
            result = or16.getOutput();
            break;
        }
        case 2: {
            Xor16Bitwise xor16(arr1, arr2);
            xor16.evaluate();
            result = xor16.getOutput();
            break;
        }
        case 3: {
            Not16Bitwise not16(arr1);
            not16.evaluate();
            result = not16.getOutput();
            break;
        }
        default:
            And16Bitwise and16(arr1, arr2);
            and16.evaluate();
            result = and16.getOutput();
            break;
    }
    
    if (result != nullptr) {
        for (int i = 0; i < 16; i++) {
            output[i].setValue(result[i].getValue());
        }
    }
}

Output* LogicalUnit::getOutput() {
    return output;
}

void LogicalUnit::setControl(int ctrl) {
    control = ctrl;
}

int LogicalUnit::getControl() const {
    return control;
}

