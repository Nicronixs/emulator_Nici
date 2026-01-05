#ifndef ONEINPUT_H
#define ONEINPUT_H

#include "../Gates/Gate.h"
#include "Input.h"

class OneInput : public Gate{
private:

public:
    OneInput(Input input) : Gate(input) {}
};
#endif //ONEINPUT_H