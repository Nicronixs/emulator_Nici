//
// Created by Ninco on 03.01.2026.
//

#ifndef SRC_ALU_H
#define SRC_ALU_H

#include "ArithmeticUnit.h"
#include "LogicalUnit.h"
#include "../Input_Output/Input.h"
#include "../Input_Output/Output.h"
#include <array>

class ALU {
private:
    ArithmeticUnit* arithmeticUnit;
    LogicalUnit* logicalUnit;
    Input input1[16];
    Input input2[16];
    Output output[16];
    bool unitControl;
    bool arithmeticControl;
    int logicalControl;

public:
 
    ALU(std::array<Input, 16> i1, std::array<Input, 16> i2, bool unitCtrl, bool arithCtrl = false, int logCtrl = 0);


    void evaluate();
    Output* getOutput();
    void setUnitControl(bool unitCtrl);
    void setArithmeticControl(bool arithCtrl);
    void setLogicalControl(int logCtrl);
    bool getUnitControl() const;
    bool getArithmeticControl() const;
    int getLogicalControl() const;
};

#endif //SRC_ALU_H

