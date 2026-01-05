#ifndef OR_H
#define OR_H

#include "../Input_Output/TwoInput.h"

class Or : TwoInput{
private:

public:
    Or(Input input1, Input input2) : TwoInput(input1, input2) {}

    bool evaluate();
};
#endif //OR_H