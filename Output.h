//Hanna Kristensen , Bradly Christensen
#ifndef OUTPUT_H
#define OUTPUT_H
#include "ChainableComponent.h"
#include <iostream>
using namespace std;
class Output : public ChainableComponent {
public:

    Output(string outputName);

    bool getOutput();


};

#endif // OUTPUT_H
