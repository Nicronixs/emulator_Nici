//
// Created by Ninco on 03.01.2026.
//

#include "ALU.h"

ALU::ALU(std::array<Input, 16> i1, std::array<Input, 16> i2, bool unitCtrl, bool arithCtrl, int logCtrl) {
    for (int i = 0; i < 16; i++) {
        input1[i] = i1[i];
        input2[i] = i2[i];
        output[i] = Output(false);
    }
    unitControl = unitCtrl;
    arithmeticControl = arithCtrl;
    logicalControl = logCtrl;
    arithmeticUnit = nullptr;
    logicalUnit = nullptr;
}

void ALU::evaluate() {
    std::array<Input, 16> arr1 = {input1[0], input1[1], input1[2], input1[3], input1[4], input1[5], input1[6], input1[7],
                                   input1[8], input1[9], input1[10], input1[11], input1[12], input1[13], input1[14], input1[15]};
    std::array<Input, 16> arr2 = {input2[0], input2[1], input2[2], input2[3], input2[4], input2[5], input2[6], input2[7],
                                   input2[8], input2[9], input2[10], input2[11], input2[12], input2[13], input2[14], input2[15]};
    
    Output* result = nullptr;
    
    if (unitControl == false) {
        arithmeticUnit = new ArithmeticUnit(arr1, arr2, arithmeticControl);
        arithmeticUnit->evaluate();
        result = arithmeticUnit->getOutput();
        delete arithmeticUnit;
        arithmeticUnit = nullptr;
    } else {
        logicalUnit = new LogicalUnit(arr1, arr2, logicalControl);
        logicalUnit->evaluate();
        result = logicalUnit->getOutput();
        delete logicalUnit;
        logicalUnit = nullptr;
    }
    
    if (result != nullptr) {
        for (int i = 0; i < 16; i++) {
            output[i].setValue(result[i].getValue());
        }
    }
}

Output* ALU::getOutput() {
    return output;
}

void ALU::setUnitControl(bool unitCtrl) {
    unitControl = unitCtrl;
}

void ALU::setArithmeticControl(bool arithCtrl) {
    arithmeticControl = arithCtrl;
}

void ALU::setLogicalControl(int logCtrl) {
    logicalControl = logCtrl;
}

bool ALU::getUnitControl() const {
    return unitControl;
}

bool ALU::getArithmeticControl() const {
    return arithmeticControl;
}

int ALU::getLogicalControl() const {
    return logicalControl;
}

