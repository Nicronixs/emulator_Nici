//
// Created by Ninco on 13.11.2025.
//

#ifndef SRC_FULLADDER8_H
#define SRC_FULLADDER8_H

#include "FullAdder.h"
#include "../Input_Output/Input.h"

class FullAdder8 {
private:
    Input i1[8] = {Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false)};
    Input i2[8] = {Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false)};

    Input sum[8] = {Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false)};

    bool cOut;

    public:
    FullAdder8(Input i1[8], Input i2[8]) {
        for (int i = 0; i < 8; i++) {
            this->i1[i] = i1[i];
            this->i2[i] = i2[i];
            this->sum[i] = sum[i];
        }
        this->cOut = false;
    }

    void evaluate();

    void printResult();
};


#endif //SRC_FULLADDER8_H