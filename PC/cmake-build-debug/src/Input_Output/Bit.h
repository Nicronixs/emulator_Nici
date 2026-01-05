#ifndef BIT_H
#define BIT_H

#include <optional>

class Bit {
private:
    bool value;

public:
    Bit():value(false){}
    Bit(bool value){this->value = value;}

    void setValue(bool v){this->value = v;}

    bool getValue() const {return this->value;}
};
#endif //BIT_H