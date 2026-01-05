//
// Created by Ninco on 03.01.2026.
//

#ifndef SRC_PC_H
#define SRC_PC_H

#include "../Input_Output/Input.h"
#include "../Input_Output/Output.h"
#include <array>

class PC {
private:
    Input input[16];
    Output output[16];

public:
    PC();
    PC(std::array<Input, 16> in);

    void setValue(std::array<Input, 16> in);
    std::array<Output, 16> getValue() const;
    void increment();
    void reset();
};

#endif //SRC_PC_H

