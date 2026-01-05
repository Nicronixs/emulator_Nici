#ifndef TWOINPUT_H
#define TWOINPUT_H

#include "../Gates/Gate.h"
#include "Input.h"

class TwoInput : public Gate{
private:

public:
    TwoInput(Input input, Input input2) : Gate(input, input2) {}
};
#endif //TWOINPUT_H