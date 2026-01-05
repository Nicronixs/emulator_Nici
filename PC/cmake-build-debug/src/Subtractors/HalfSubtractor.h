//
// Created by Ninco on 20.11.2025.
//

#ifndef SRC_HALFSUBTRACTOR_H
#define SRC_HALFSUBTRACTOR_H
#include "Gates/And.h"
#include "Gates/Not.h"
#include "Gates/Xor.h"
#include "Input_Output/Input.h"
#include "Input_Output/Output.h"


class HalfSubtractor {
    private:
        Input i1;
        Input i2;
        Output dif;
        Output borrow;
        And a1;
        Not n1;
        Xor x1;
    public:
        HalfSubtractor(Input i1, Input i2) : i1(i1), i2(i2), dif(0), borrow(0), a1(And(Input(0), Input(0))), n1(Input(0)), x1(Input(0), Input(0)) {}

        void evaluate();

        Output getDif() const {return dif;}

        Output getBorrow() const {return borrow;}
};


#endif //SRC_HALFSUBTRACTOR_H