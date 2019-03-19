#include "NotGate.h"
#include "ChainableComponent.h"
using namespace std;
#include <iostream>
#include <cassert>

NotGate::NotGate() :ChainableComponent("NOT"){
}

bool NotGate::getOutput(){
assert(input != nullptr);
if(input->getOutput() == true){
    return false;
}

if(input->getOutput() == false){
    return true;
}

}







