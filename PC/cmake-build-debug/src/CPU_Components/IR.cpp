//
// Created by Ninco on 03.01.2026.
//

#include "IR.h"

IR::IR() {
    for (int i = 0; i < 16; i++) {
        input[i] = Input(false);
        output[i] = Output(false);
    }
    enabled = false;
}

IR::IR(std::array<Input, 16> in) {
    for (int i = 0; i < 16; i++) {
        input[i] = in[i];
        output[i] = Output(in[i].getValue());
    }
    enabled = false;
}

void IR::set(std::array<Input, 16> in) {
    for (int i = 0; i < 16; i++) {
        input[i] = in[i];
        if (enabled) {
            output[i].setValue(in[i].getValue());
        }
    }
}

std::array<Output, 16> IR::get() const {
    std::array<Output, 16> result;
    for (int i = 0; i < 16; i++) {
        result[i] = Output(output[i].getValue());
    }
    return result;
}

void IR::enable() {
    enabled = true;
    for (int i = 0; i < 16; i++) {
        output[i].setValue(input[i].getValue());
    }
}

void IR::disable() {
    enabled = false;
}

bool IR::isEnabled() const {
    return enabled;
}

