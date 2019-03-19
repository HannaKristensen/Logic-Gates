//Hanna Kristensen , Bradly Christensen
#ifndef INPUT_H
#define INPUT_H

#include <iostream>
#include "Component.h"


class Input : public Component {
private:
    bool value;
public:
    Input(string inputName);

    void setValue(bool newValue);
    bool getOutput();

};
#endif // INPUT_H
