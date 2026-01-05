//
// Created by Ninco on 03.01.2026.
//

#ifndef SRC_AND16BITWISE_H
#define SRC_AND16BITWISE_H

#include "../Gates/And.h"
#include "../Input_Output/Input.h"
#include "../Input_Output/Output.h"
#include <array>

class And16Bitwise {
private:
    Input input1[16];
    Input input2[16];
    Output output[16];

public:
    And16Bitwise(std::array<Input, 16> i1, std::array<Input, 16> i2);

    void evaluate();
    Output* getOutput();
};

#endif //SRC_AND16BITWISE_H

