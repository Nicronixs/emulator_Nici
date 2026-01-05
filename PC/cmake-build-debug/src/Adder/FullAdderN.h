#ifndef FULLADDERN_H
#define FULLADDERN_H

#include <iostream>
#include <array>
#include "FullAdder.h"
#include "../Input_Output/Input.h"

template<int N>
class FullAdderN {
private:
    std::array<Input, N> i1;
    std::array<Input, N> i2;
    std::array<Input, N> sum;
    bool c_out = false;

public:
    FullAdderN(const std::array<Input, N>& a,
               const std::array<Input, N>& b)
    {
        i1 = a;
        i2 = b;
    }

    void evaluate() {
        bool carry = false;

        for (int i = N - 1; i >= 0; --i) {
            FullAdder f(i1[i], i2[i], Input(carry));
            f.evaluate();
            sum[i].setValue(f.getSum());
            carry = f.getCarry();
        }

        c_out = carry;
    }

    const std::array<Input, N>& getSumArray() const {
        return sum;
    }

    bool getCarryOut() const {
        return c_out;
    }

    void printResult() const {
        std::cout << "Ergebnis (" << N << " Bit): ";

        for (int i = 0; i < N; ++i)
            std::cout << sum[i].getValue();

        std::cout << "  Carry: " << c_out << std::endl;
    }
};

#endif//FULLADDERN_H