#include "FullAdder.h"

void FullAdder::evaluate() {
    HalfAdder h1 (a, b);
    bool x = h1.getSum();
    HalfAdder h2 (x, c);

    bool sum = h2.getSum();

    bool carry1 = h1.getCarry();
    bool carry2 = h2.getCarry();

    Or o (carry1, carry2);

    bool carry = o.evaluate();

    std::cout << "sum = " << sum << ", carry = " << carry << std::endl;
}

bool FullAdder::evaluate_() {
    HalfAdder h1 (a, b);
    bool x = h1.getSum();
    HalfAdder h2 (x, c);

    bool sum = h2.getSum();

    bool carry1 = h1.getCarry();
    bool carry2 = h2.getCarry();

    Or o (carry1, carry2);

    bool carry = o.evaluate();

    return sum && carry;
}

bool FullAdder::getSum() {
    HalfAdder h1 (a, b);
    bool x = h1.getSum();
    HalfAdder h2 (x, c);

    bool sum = h2.getSum();

    return sum;
}

bool FullAdder::getCarry() {
    HalfAdder h1 (a, b);
    bool x = h1.getSum();
    HalfAdder h2 (x, c);

    bool carry1 = h1.getCarry();
    bool carry2 = h2.getCarry();

    Or o (carry1, carry2);

    bool carry = o.evaluate();

    return carry;
}