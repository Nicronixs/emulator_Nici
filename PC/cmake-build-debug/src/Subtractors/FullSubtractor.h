//
// Created by Ninco on 25.11.2025.
//

#ifndef SRC_FULLSUBTRACTOR_H
#define SRC_FULLSUBTRACTOR_H
#include "Gates/Or.h"
#include "Input_Output/Input.h"
#include "Input_Output/Output.h"


class FullSubtractor {
    private:
        Input a;
        Input b;
        Input bin;
        Output d;
        Output bout;
    public:
    FullSubtractor(Input a, Input b, Input Bin) : a(a), b(b), bin(Bin), d(0), bout(0){}

    void evaluate();

    Output getDif() const {return d;}

    Output getBorrow() const {return bout;}
};


#endif //SRC_FULLSUBTRACTOR_H