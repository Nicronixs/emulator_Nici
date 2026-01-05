//
// Created by Ninco on 25.11.2025.
//

#include "FullSubtractor.h"

#include "HalfSubtractor.h"

void FullSubtractor::evaluate() {
    HalfSubtractor h1 = HalfSubtractor(a, b);
    h1.evaluate();
    Bit dif1 = h1.getDif();
    Bit borrow1 = h1.getBorrow();
    HalfSubtractor h2 = HalfSubtractor(Input(dif1.getValue()), bin);
    h2.evaluate();
    d = h2.getDif();
    Bit borrow2 = h2.getBorrow();
    Or o1 = Or(Input(borrow1.getValue()), Input(borrow2.getValue()));
    bout = Output(o1.evaluate());
}
