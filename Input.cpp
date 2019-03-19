#include <iostream>
#include "Component.h"
#include "Input.h"

Input::Input(string inputName) :Component(inputName){
}

void Input::setValue(bool newValue){
 value = newValue;
}

bool Input::getOutput(){
    return value;
}
