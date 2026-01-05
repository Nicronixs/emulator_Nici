#include "Xor.h"

bool Xor::evaluate() {
    bool a = getInput().getValue();
    bool b = getInput2().getValue();

    if (a != b){
        return true;
    }else {
        return false;
    }
}