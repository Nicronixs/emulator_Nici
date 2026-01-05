//
// Created by Ninco on 03.01.2026.
//

#ifndef SRC_ADD16_H
#define SRC_ADD16_H

#include "../Adder/FullAdder.h"
#include "../Input_Output/Input.h"
#include "../Input_Output/Output.h"

class Add16 {
private:
    Input input1[16];
    Input input2[16];
    Output output[16];
    bool carryOut;

public:
    Add16(Input i1[16], Input i2[16]);

    void evaluate();
    Output* getOutput();
    bool getCarryOut() const;
};

#endif //SRC_ADD16_H

