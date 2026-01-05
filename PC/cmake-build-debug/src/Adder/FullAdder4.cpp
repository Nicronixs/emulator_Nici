#include "FullAdder4.h"

void FullAdder4::evaluate() {
    bool carry = false;
    for(int i = 3; i >= 0; --i) {
        FullAdder f(i1[i], i2[i], Input(carry));
        f.evaluate();
        sum[i].setValue(f.getSum());
        carry = f.getCarry();
    }
    cOut = carry;
}

void FullAdder4::printResult() {
    std::cout << "Ergebnis: ";
    for(int i = 0; i < 4; i++) {
        std::cout << sum[i].getValue();
    }
    std::cout << ", Carry Out: " << cOut << std::endl;
}


