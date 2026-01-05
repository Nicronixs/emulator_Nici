//
// Created by Ninco on 03.01.2026.
//

#ifndef SRC_MEMORY_H
#define SRC_MEMORY_H

#include "../Input_Output/Input.h"
#include "../Input_Output/Output.h"
#include <array>

class Memory {
private:
    static const int MEMORY_SIZE = 65536; // 2^16 addresses
    Input memory[MEMORY_SIZE][16];
    Input address[16];
    Input writeData[16];
    Output readOutput[16];
    bool readEnable;
    bool writeEnable;

public:
    Memory();

    void setAddress(std::array<Input, 16> addr);
    void setWriteData(std::array<Input, 16> data);
    void setReadEnable(bool enable);
    void setWriteEnable(bool enable);

    void read();
    void write();

    std::array<Output, 16> getReadOutput() const;
};

#endif //SRC_MEMORY_H

