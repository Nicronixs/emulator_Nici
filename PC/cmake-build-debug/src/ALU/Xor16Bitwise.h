//
// Created by Ninco on 03.01.2026.
//

#ifndef SRC_XOR16BITWISE_H
#define SRC_XOR16BITWISE_H

#include "../Gates/Xor.h"
#include "../Input_Output/Input.h"
#include "../Input_Output/Output.h"
#include <array>

class Xor16Bitwise {
private:
    Input input1[16];
    Input input2[16];
    Output output[16];

public:
    Xor16Bitwise(std::array<Input, 16> i1, std::array<Input, 16> i2);

    void evaluate();
    Output* getOutput();
};

#endif //SRC_XOR16BITWISE_H

