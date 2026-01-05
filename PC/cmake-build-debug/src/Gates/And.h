
#ifndef AND_H
#define AND_H

#include "../Input_Output/TwoInput.h"

class And : TwoInput{
private:

public:
    And(Input input1, Input input2) : TwoInput(input1, input2) {}

    bool evaluate();
};
#endif //AND_H