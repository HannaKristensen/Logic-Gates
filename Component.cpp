#include "Component.h"
#include <iostream>

Component::Component(string conponentLabel){
    label = conponentLabel;
}

bool Component::getOutput(){
}

void Component::prettyPrint(string padding){
    cout << padding << label << " : " << getOutput() <<endl;
}
