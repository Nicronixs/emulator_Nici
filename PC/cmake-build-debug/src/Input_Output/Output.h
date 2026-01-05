#ifndef OUTPUT_H
#define OUTPUT_H

#include "Bit.h"

class Output : public Bit {
private:

public:
    Output(bool value) : Bit(value) {}
};
#endif //OUTPUT_H