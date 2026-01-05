//
// Created by Ninco on 03.01.2026.
//

#ifndef SRC_ARITHMETICUNIT_H
#define SRC_ARITHMETICUNIT_H

#include "Add16.h"
#include "Sub16.h"
#include "../Input_Output/Input.h"
#include "../Input_Output/Output.h"
#include <array>

class ArithmeticUnit {
private:
    Add16* add16;
    Sub16* sub16;
    Input input1[16];
    Input input2[16];
    Output output[16];
    bool control;

public:
    ArithmeticUnit(std::array<Input, 16> i1, std::array<Input, 16> i2, bool ctrl);

    void evaluate();
    Output* getOutput();
    void setControl(bool ctrl);
    bool getControl() const;
};

#endif //SRC_ARITHMETICUNIT_H

