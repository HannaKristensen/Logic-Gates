//Hanna Kristensen , Bradly Christensen
#ifndef CHAINABLECOMPONENT_H
#define CHAINABLECOMPONENT_H

#include "Component.h"
#include <iostream>

using namespace std;

class ChainableComponent :public Component{
protected:
Component* input;

public:
ChainableComponent(string componentLabel);
void setInput(Component* inputLink);

void prettyPrint(string padding);

};


#endif // CHAINABLECOMPONENT_H
