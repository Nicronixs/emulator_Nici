//
// Created by Ninco on 03.01.2026.
//

#ifndef SRC_IR_H
#define SRC_IR_H

#include "../Input_Output/Input.h"
#include "../Input_Output/Output.h"
#include <array>

class IR {
private:
    Input input[16];
    Output output[16];
    bool enabled;

public:
    IR();
    IR(std::array<Input, 16> in);

    void set(std::array<Input, 16> in);
    std::array<Output, 16> get() const;
    void enable();
    void disable();
    bool isEnabled() const;
};

#endif //SRC_IR_H

