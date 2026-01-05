//
// Created by Ninco on 13.11.2025.
//

#include "FullAdder16.h"

void FullAdder16::evaluate() {
    bool carry = false;
    for(int i = 15; i >= 0; --i) {
        FullAdder f(i1[i], i2[i], Input(carry));
        f.evaluate();
        sum[i].setValue(f.getSum());
        carry = f.getCarry();
    }
    cOut = carry;
}

void FullAdder16::printResult() {
    std::cout << "Ergebnis: ";
    for(int i = 0; i < 16; i++) {
        std::cout << sum[i].getValue();
    }
    std::cout << ", Carry Out: " << cOut << std::endl;
}