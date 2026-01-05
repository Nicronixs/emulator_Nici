#ifndef GATE_H
#define GATE_H

#include<string>
#include<optional>
#include "../Input_Output/Input.h"

class Gate {
private:
    Input input;
    Input input2;

public:
    Gate(Input input, Input input2) : input(input), input2(input2){};
    Gate(Input input) : input(input), input2(0){};

    Input getInput(){return this->input;}
    Input getInput2(){return this->input2;}
};
#endif //GATE_H