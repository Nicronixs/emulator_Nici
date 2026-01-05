#include "And.h"

bool And::evaluate() {
    bool a = getInput().getValue();
    bool b = getInput2().getValue();

    if (a == 1 && b == 1) {
        return true;
    }else {
        return false;
    }
}