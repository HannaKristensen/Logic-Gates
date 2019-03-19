#include "ChainableComponent.h"
#include "Component.h"
#include <iostream>

using namespace std;
ChainableComponent::ChainableComponent(string componentLabel) :Component(componentLabel){
}

void ChainableComponent::setInput(Component* inputLink){
    input = inputLink;
}

void ChainableComponent::prettyPrint(string padding){
    Component::prettyPrint(padding);
    if(input != nullptr){
        input->prettyPrint(padding + "---");
    }

}
