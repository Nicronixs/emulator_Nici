#ifndef XOR_H
#define XOR_H

#include <minwindef.h>

#include "../Input_Output/TwoInput.h"

class Xor : TwoInput{
private:

public:
   Xor(Input input1, Input input2) : TwoInput(input1, input2) {}

   bool evaluate();
};
#endif //XOR_H