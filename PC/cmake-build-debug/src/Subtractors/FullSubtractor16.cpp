//
// Created by Ninco on 25.11.2025.
//

#include "FullSubtractor16.h"

#include <iostream>

#include "FullSubtractor.h"

void FullSubtractor16::evaluate() {
    bool bin = false;
    for(int i = 15; i >= 0; --i) {
        FullSubtractor h(i1[i], i2[i], Input(bin));
        h.evaluate();
        dif[i].setValue(h.getDif().getValue());
        bin = h.getBorrow().getValue();
    }
    bout = bin;
};

void FullSubtractor16::printResult() {
    std::cout << "Ergebnis: ";
    for(int i = 0; i < 16; i++) {
        std::cout << dif[i].getValue();
    }
    std::cout << ", Borrow Out: " << bout << std::endl;
}