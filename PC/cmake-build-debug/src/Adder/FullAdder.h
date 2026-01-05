#ifndef FULLADDER_H
#define FULLADDER_H

#include "../Gates/Or.h"
#include "HalfAdder.h"
#include <iostream>

class FullAdder {
private:
    Input a;
    Input b;
    Input c;
    bool sum;
    bool carry;

public:
    FullAdder(Input a, Input b, Input c) :
    a(a),
    b(b),
    c(c),
    sum(sum),
    carry(carry)
    {}

    void evaluate();

    bool evaluate_();

    bool getSum();

    bool getCarry()
;};
#endif //FULLADDER_H