//Hanna Kristensen , Bradly Christensen
#ifndef COMPONENT_H
#define COMPONENT_H

#include <iostream>
using namespace std;

class Component {

private:
string label;

public:
Component(string conponentLabel);

virtual bool getOutput();
void prettyPrint(string padding);

};

#endif // COMPONENT_H
