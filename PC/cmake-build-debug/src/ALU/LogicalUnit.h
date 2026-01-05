//
// Created by Ninco on 03.01.2026.
//

#ifndef SRC_LOGICALUNIT_H
#define SRC_LOGICALUNIT_H

#include "And16Bitwise.h"
#include "Or16Bitwise.h"
#include "Xor16Bitwise.h"
#include "Not16Bitwise.h"
#include "../Input_Output/Input.h"
#include "../Input_Output/Output.h"
#include <array>

class LogicalUnit {
private:
    Input input1[16];
    Input input2[16];
    Output output[16];
    int control;

public:
    LogicalUnit(std::array<Input, 16> i1, std::array<Input, 16> i2, int ctrl);

    void evaluate();
    Output* getOutput();
    void setControl(int ctrl);
    int getControl() const;
};

#endif //SRC_LOGICALUNIT_H

