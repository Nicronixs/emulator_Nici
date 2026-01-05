#ifndef INPUT_H
#define INPUT_H

#include "Bit.h"

class Input : public Bit{
private:

public:
    Input():Bit(false){}
    Input(bool value) : Bit(value) {}

};
#endif //INPUT_H