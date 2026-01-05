#ifndef FULLADDER4_H
#define FULLADDER4_H

#include "FullAdder.h"
#include "../Input_Output/Input.h"

class FullAdder4{
private:

    Input i1[4] = {Input(false),Input(false),Input(false),Input(false)};
    Input i2[4] = {Input(false),Input(false),Input(false),Input(false)};

    Input sum[4] = {Input(false),Input(false),Input(false),Input(false)};

    bool cOut;

public:
    FullAdder4(Input i1[4], Input i2[4]) {
        for (int i = 0; i < 4; i++) {
            this->i1[i] = i1[i];
            this->i2[i] = i2[i];
            this->sum[i] = sum[i];
        }
        this->cOut = false;
    }

    void evaluate();

    void printResult();
};
#endif //FULLADDER4_H