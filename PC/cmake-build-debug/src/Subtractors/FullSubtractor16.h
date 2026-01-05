//
// Created by Ninco on 25.11.2025.
//

#ifndef SRC_FULLSUBTRACTOR16_H
#define SRC_FULLSUBTRACTOR16_H
#include <array>

#include "Input_Output/Input.h"
#include "Input_Output/Output.h"


class FullSubtractor16 {
    private:
    Input i1[16] = {Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false)};
    Input i2[16] = {Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false),Input(false)};

    Output dif[16] = {Output(false),Output(false),Output(false),Output(false),Output(false),Output(false),Output(false),Output(false),Output(false),Output(false),Output(false),Output(false),Output(false),Output(false),Output(false),Output(false)};

    bool bout;
    public:
    FullSubtractor16(std::array<Input, 16> a, std::array<Input, 16> b) {
        for (int i = 0; i < 16; i++) {
            this->i1[i] = a[i];
            this->i2[i] = b[i];
            this->dif[i] = Output(false);
        }
        bout = false;
    }

    void evaluate();

    void printResult();


};


#endif //SRC_FULLSUBTRACTOR16_H