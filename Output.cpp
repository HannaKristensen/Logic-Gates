#include "Output.h"
#include <iostream>


Output::Output(string outputName) :ChainableComponent(outputName){
}

bool Output::getOutput(){
return input->getOutput();
}
