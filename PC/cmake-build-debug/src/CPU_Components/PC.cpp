//
// Created by Ninco on 03.01.2026.
//

#include "PC.h"
#include "../Adder/FullAdderN.h"

PC::PC() {
    for (int i = 0; i < 16; i++) {
        input[i] = Input(false);
        output[i] = Output(false);
    }
}

PC::PC(std::array<Input, 16> in) {
    for (int i = 0; i < 16; i++) {
        input[i] = in[i];
        output[i] = Output(in[i].getValue());
    }
}

void PC::setValue(std::array<Input, 16> in) {
    for (int i = 0; i < 16; i++) {
        input[i] = in[i];
        output[i].setValue(in[i].getValue());
    }
}

std::array<Output, 16> PC::getValue() const {
    std::array<Output, 16> result;
    for (int i = 0; i < 16; i++) {
        result[i] = Output(output[i].getValue());
    }
    return result;
}

void PC::increment() {
    std::array<Input, 16> current;
    for (int i = 0; i < 16; i++) {
        current[i] = input[i];
    }
    
    std::array<Input, 16> one;
    for (int i = 0; i < 15; i++) {
        one[i] = Input(false);
    }
    one[15] = Input(true);
    
    FullAdderN<16> adder(current, one);
    adder.evaluate();
    
    auto sumArray = adder.getSumArray();
    for (int i = 0; i < 16; i++) {
        input[i] = sumArray[i];
        output[i].setValue(sumArray[i].getValue());
    }
}

void PC::reset() {
    for (int i = 0; i < 16; i++) {
        input[i] = Input(false);
        output[i].setValue(false);
    }
}

