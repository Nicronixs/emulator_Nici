#ifndef HALFADDER_H
#define HALFADDER_H

#include "../Gates/And.h"
#include "../Gates/Xor.h"
#include "../Input_Output/Input.h"

class HalfAdder {
private:
    Input input1;
    Input input2;
    And a;
    Xor x;

public:
    HalfAdder(Input input1, Input input2) : input1(input1), input2(input2), a(input1, input2), x(input1, input2) {}

    void evaluate();

    bool evaluate_();

    bool getSum();

    bool getCarry();
};



#endif //HALFADDER_H
