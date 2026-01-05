//
// Created by Ninco on 03.01.2026.
//

#ifndef SRC_SUB16_H
#define SRC_SUB16_H

#include "../Input_Output/Input.h"
#include "../Input_Output/Output.h"
#include <array>

class Sub16 {
private:
    Input input1[16];
    Input input2[16];
    Output output[16];
    bool borrowOut;

public:
    Sub16(std::array<Input, 16> i1, std::array<Input, 16> i2);


    void evaluate();
    Output* getOutput();
    bool getBorrowOut() const;
};

#endif //SRC_SUB16_H

