//
// Created by Ninco on 03.01.2026.
//

#ifndef SRC_OR16BITWISE_H
#define SRC_OR16BITWISE_H

#include "../Gates/Or.h"
#include "../Input_Output/Input.h"
#include "../Input_Output/Output.h"
#include <array>

class Or16Bitwise {
private:
    Input input1[16];
    Input input2[16];
    Output output[16];

public:
    Or16Bitwise(std::array<Input, 16> i1, std::array<Input, 16> i2);

    void evaluate();
    Output* getOutput();
};

#endif //SRC_OR16BITWISE_H

