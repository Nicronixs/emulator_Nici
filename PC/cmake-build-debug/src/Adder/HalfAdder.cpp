#include "HalfAdder.h"

#include <iostream>
#include <bits/ostream.tcc>

void HalfAdder::evaluate() {
    bool sum = x.evaluate();
    bool carry = a.evaluate();

    std:: cout << "sum = " << sum << ", " << "carry = " << carry << std::endl;
}

bool HalfAdder::evaluate_(){
    bool sum = x.evaluate();
    bool carry = a.evaluate();

    return sum && carry;
}

bool HalfAdder::getSum(){
    bool sum = x.evaluate();

    return sum;
}

bool HalfAdder::getCarry(){
    bool carry = a.evaluate();

    return carry;
}