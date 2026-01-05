cmake_minimum_required(VERSION 4.0)
project(src)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(src
        Gates/And.cpp
        Gates/And.h
        Input_Output/Bit.cpp
        Input_Output/Bit.h
        Adder/FullAdder.cpp
        Adder/FullAdder.h
        Adder/FullAdder4.cpp
        Adder/FullAdder4.h
        Gates/Gate.cpp
        Gates/Gate.h
        Adder/HalfAdder.cpp
        Adder/HalfAdder.h
        Input_Output/Input.cpp
        Input_Output/Input.h
        main.cpp
        Gates/Not.cpp
        Gates/Not.h
        Input_Output/OneInput.cpp
        Input_Output/OneInput.h
        Gates/Or.cpp
        Gates/Or.h
        Input_Output/Output.cpp
        Input_Output/Output.h
        Input_Output/TwoInput.cpp
        Input_Output/TwoInput.h
        Gates/Xor.cpp
        Gates/Xor.h
        Adder/FullAdder8.cpp
        Adder/FullAdder8.h
        Adder/FullAdder16.cpp
        Adder/FullAdder16.h
        Adder/FullAdderN.cpp
        Adder/FullAdderN.h
        Input_Output/Conversion.cpp
        Input_Output/Conversion.h
        Subtractors/HalfSubtractor.cpp
        Subtractors/HalfSubtractor.h
        Subtractors/FullSubtractor.cpp
        Subtractors/FullSubtractor.h
        Subtractors/FullSubtractor16.cpp
        Subtractors/FullSubtractor16.h
        Gates/And_16.cpp
        Gates/And_16.h
        Gates/Or_16.cpp
        Gates/Or_16.h
        Gates/Not_16.cpp
        Gates/Not_16.h
        Gates/Xor_16.cpp
        Gates/Xor_16.h)
