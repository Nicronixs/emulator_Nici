//
// Created by Ninco on 03.01.2026.
//

#include "Xor_16.h"

Xor_16::Xor_16(Input input0, Input input1, Input input2, Input input3,
               Input input4, Input input5, Input input6, Input input7,
               Input input8, Input input9, Input input10, Input input11,
               Input input12, Input input13, Input input14, Input input15) {
    inputs[0] = input0;
    inputs[1] = input1;
    inputs[2] = input2;
    inputs[3] = input3;
    inputs[4] = input4;
    inputs[5] = input5;
    inputs[6] = input6;
    inputs[7] = input7;
    inputs[8] = input8;
    inputs[9] = input9;
    inputs[10] = input10;
    inputs[11] = input11;
    inputs[12] = input12;
    inputs[13] = input13;
    inputs[14] = input14;
    inputs[15] = input15;
}

bool Xor_16::evaluate() {
    Input currentResult = inputs[0];
    
    for (int i = 1; i < 16; i++) {
        Xor xorGate(currentResult, inputs[i]);
        bool result = xorGate.evaluate();
        currentResult = Input(result);
    }
    
    return currentResult.getValue();
}
