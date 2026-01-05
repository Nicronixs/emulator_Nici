#ifndef CONVERSION_H
#define CONVERSION_H

#include <array>
#include <stdexcept>
#include <string>
#include "Input.h"

template<int N>
std::array<Input, N> binaryStringToArray(const std::string& bin) {

    std::array<Input, N> result;

    std::string padded = bin;

    for (char c : padded) {
        if (c != '0' && c != '1') {
            throw std::runtime_error("Ungültige Binärzahl!");
        }
    }

    if (padded.length() < N)
        padded = std::string(N - padded.length(), '0') + padded;

    if (padded.length() > N)
        padded = padded.substr(padded.length() - N);

    for (int i = 0; i < N; ++i)
        result[i].setValue(padded[i] == '1');

    return result;
}


template<int N>
std::array<Input, N> intToInputArrayMSB(int num) {
    std::array<Input, N> result;
    int temp[N];

    for (int i = 0; i < N; ++i) {
        temp[i] = num % 2;
        num = num / 2;
    }

    for (int i = 0; i < N; ++i) {
        result[i].setValue(temp[N - 1 - i]);
    }

    return result;
}


template<int N>
std::string inputArrayToBinary(const std::array<Input, N>& arr) {
    std::string s = "";
    for (int i = 0; i < N; ++i)
        s += (arr[i].getValue() ? '1' : '0');
    return s;
}


template<int N>
int inputArrayToDecimal(const std::array<Input, N>& arr) {
    int result = 0;
    int base = 1;

    for (int i = N - 1; i >= 0; --i) {
        if (arr[i].getValue())
            result += base;
        base *= 2;
    }

    return result;
}

#endif//CONVERSION_H