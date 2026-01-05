//
// Created by Ninco on 03.01.2026.
//

#ifndef SRC_NOT16BITWISE_H
#define SRC_NOT16BITWISE_H

#include "../Gates/Not.h"
#include "../Input_Output/Input.h"
#include "../Input_Output/Output.h"
#include <array>

class Not16Bitwise {
private:
    Input input[16];
    Output output[16];

public:
    Not16Bitwise(std::array<Input, 16> i);

    void evaluate();
    Output* getOutput();
};

#endif //SRC_NOT16BITWISE_H

