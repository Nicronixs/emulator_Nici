#include <iostream>

#include "Input_Output/Conversion.h"
#include "Adder/FullAdder.h"
#include "Adder/FullAdder16.h"
#include "Adder/FullAdder4.h"
#include "Adder/HalfAdder.h"
#include "Gates/Or.h"
#include "Adder/FullAdder8.h"
#include "Adder/FullAdder16.h"
#include "Adder/FullAdderN.h"
#include "Subtractors/FullSubtractor16.h"
#include "CPU_Components/PC.h"
#include "CPU_Components/IR.h"
#include "CPU_Components/RegisterFile.h"
#include "Memory/Memory.h"
#include "CPU/CPU.h"

using namespace std;

int main() {

    // CPU Komponenten Tests
    cout << "\n========== CPU Komponenten Tests ==========" << endl;

    // PC (Program Counter) Test
    cout << "\n--- PC (Program Counter) Test ---" << endl;
    PC programCounter;
    auto pcValue = programCounter.getValue();
    cout << "Initial PC: ";
    for (int i = 0; i < 16; i++) cout << pcValue[i].getValue();
    cout << endl;
    
    programCounter.increment();
    pcValue = programCounter.getValue();
    cout << "PC nach increment(): ";
    for (int i = 0; i < 16; i++) cout << pcValue[i].getValue();
    cout << endl;

    // IR (Instruction Register) Test
    cout << "\n--- IR (Instruction Register) Test ---" << endl;
    IR instructionRegister;
    auto testInstruction = binaryStringToArray<16>("1010101010101010");
    instructionRegister.enable();
    instructionRegister.set(testInstruction);
    auto irValue = instructionRegister.get();
    cout << "IR Wert: ";
    for (int i = 0; i < 16; i++) cout << irValue[i].getValue();
    cout << endl;
    cout << "IR enabled: " << instructionRegister.isEnabled() << endl;

    // RegisterFile Test
    cout << "\n--- RegisterFile Test ---" << endl;
    RegisterFile regFile;
    auto regAddr = binaryStringToArray<4>("0001"); // Register 1
    auto regData = binaryStringToArray<16>("1111000011110000");
    regFile.setWriteAddress(regAddr);
    regFile.setWriteData(regData);
    regFile.setWriteEnable(true);
    regFile.write();
    
    regFile.setReadAddress1(regAddr);
    regFile.read();
    auto readOut1 = regFile.getReadOutput1();
    cout << "Register 1 gelesen: ";
    for (int i = 0; i < 16; i++) cout << readOut1[i].getValue();
    cout << endl;

    // Memory Test
    cout << "\n--- Memory Test ---" << endl;
    Memory memory;
    auto memAddr = binaryStringToArray<16>("0000000000000001"); // Adresse 1
    auto memData = binaryStringToArray<16>("1100110011001100");
    memory.setAddress(memAddr);
    memory.setWriteData(memData);
    memory.setWriteEnable(true);
    memory.write();
    
    memory.setReadEnable(true);
    memory.read();
    auto memOut = memory.getReadOutput();
    cout << "Memory Adresse 1 gelesen: ";
    for (int i = 0; i < 16; i++) cout << memOut[i].getValue();
    cout << endl;

    // CPU Test
    cout << "\n--- CPU Test ---" << endl;
    CPU cpu;
    cout << "CPU erstellt mit:" << endl;
    cout << "  PC: " << (cpu.getPC() != nullptr ? "OK" : "NULL") << endl;
    cout << "  IR: " << (cpu.getIR() != nullptr ? "OK" : "NULL") << endl;
    cout << "  RegisterFile: " << (cpu.getRegisterFile() != nullptr ? "OK" : "NULL") << endl;
    cout << "  Memory: " << (cpu.getMemory() != nullptr ? "OK" : "NULL") << endl;
}
