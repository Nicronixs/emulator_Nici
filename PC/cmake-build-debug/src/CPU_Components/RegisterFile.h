//
// Created by Ninco on 03.01.2026.
//

#ifndef SRC_REGISTERFILE_H
#define SRC_REGISTERFILE_H

#include "../Input_Output/Input.h"
#include "../Input_Output/Output.h"
#include <array>

class RegisterFile {
private:
    static const int NUM_REGISTERS = 16;
    Input registers[NUM_REGISTERS][16];
    Output readOutput1[16];
    Output readOutput2[16];
    Input readAddress1[4];
    Input readAddress2[4];
    Input writeAddress[4];
    Input writeData[16];
    bool writeEnable;

public:
    RegisterFile();

    void setReadAddress1(std::array<Input, 4> addr);
    void setReadAddress2(std::array<Input, 4> addr);
    void setWriteAddress(std::array<Input, 4> addr);
    void setWriteData(std::array<Input, 16> data);
    void setWriteEnable(bool enable);

    void read();
    void write();

    std::array<Output, 16> getReadOutput1() const;
    std::array<Output, 16> getReadOutput2() const;
};

#endif //SRC_REGISTERFILE_H

