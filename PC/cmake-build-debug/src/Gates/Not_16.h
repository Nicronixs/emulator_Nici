//
// Created by Ninco on 03.01.2026.
//

#ifndef SRC_NOT_16_H
#define SRC_NOT_16_H

#include "Not.h"
#include "../Input_Output/Input.h"

class Not_16 {
private:
    Input inputs[16];

public:

    Not_16(Input input0, Input input1, Input input2, Input input3,
           Input input4, Input input5, Input input6, Input input7,
           Input input8, Input input9, Input input10, Input input11,
           Input input12, Input input13, Input input14, Input input15);


    Input* evaluate();
};


#endif //SRC_NOT_16_H