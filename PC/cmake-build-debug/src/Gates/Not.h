#ifndef NOT_H
#define NOT_H

#include "../Input_Output/OneInput.h"

class Not : OneInput{
private:

public:
    Not(Input input) : OneInput(input) {}

    bool not_();

    Input evaluate(Input a) const;
};
#endif //NOT_H