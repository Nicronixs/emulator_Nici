//
// Created by Ninco on 20.11.2025.
//

#include "HalfSubtractor.h"

void HalfSubtractor::evaluate() {
    Input noti1 = n1.evaluate(i1);
    x1 = Xor(i1, i2);
    a1 = And(noti1, i2);
    dif = x1.evaluate();
    borrow = a1.evaluate();
}

