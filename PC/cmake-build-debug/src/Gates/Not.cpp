#include "Not.h"

#include "Input_Output/Output.h"

bool Not::not_() {
    bool a = getInput().getValue();

    if (a == true) {
        a = false;
    }else if (a == false){
        a = true;
    }
    return a;
}

Input Not::evaluate(Input a) const {
    bool temp = a.getValue();
    if (temp == true) {
        temp = false;
    }else{
        temp = true;
    }
    return temp;
}