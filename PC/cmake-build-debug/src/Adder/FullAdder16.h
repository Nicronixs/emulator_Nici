//
// Created by Ninco on 13.11.2025.
//

#ifndef SRC_FULLADDER16_H
#define SRC_FULLADDER16_H

#include "../Input_Output/Input.h"
#include "FullAdder.h"

class FullAdder16 {
private:
    Input i1[16] = {Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false)};
    Input i2[16] = {Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false)};

    Input sum[16] = {Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false)};

    bool cOut;

public:
    FullAdder16(Input i1[16], Input i2[16]) {
        for (int i = 0; i < 16; i++) {
            this->i1[i] = i1[i];
            this->i2[i] = i2[i];
            this->sum[i] = sum[i];
        }
        this->cOut = false;
    }

    void evaluate();

    void printResult();
};


#endif //SRC_FULLADDER16_H