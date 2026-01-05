//
// Created by Ninco on 03.01.2026.
//

#include "Add16.h"

Add16::Add16(Input i1[16], Input i2[16]) {
    for (int i = 0; i < 16; i++) {
        input1[i] = i1[i];
        input2[i] = i2[i];
        output[i] = Output(false);
    }
    carryOut = false;
}

void Add16::evaluate() {
    FullAdder16 adder(input1, input2);
    adder.evaluate();
    
    bool carry = false;
    for(int i = 15; i >= 0; --i) {
        FullAdder f(input1[i], input2[i], Input(carry));
        f.evaluate();
        output[i].setValue(f.getSum());
        carry = f.getCarry();
    }
    carryOut = carry;
}

Output* Add16::getOutput() {
    return output;
}

bool Add16::getCarryOut() const {
    return carryOut;
}

