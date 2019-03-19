#include "TwoInputGate.h"
#include <string>
#include "ChainableComponent.h"
#include <iostream>
#include <cassert>

TwoInputGate::TwoInputGate(LogicOperation gateOperation) :ChainableComponent(LOGIC_LABELS[gateOperation]){
  gateType = gateOperation;
}

void TwoInputGate::setInput2(Component* inputLink){
    input2 = inputLink;
}

void TwoInputGate::prettyPrint(string padding){
  ChainableComponent::prettyPrint(padding);
  input2->prettyPrint(padding + "---");

}

bool TwoInputGate::getOutput(){

   assert(input != nullptr);
   assert(input2 != nullptr);

   if(gateType == 0){ //OR
           if(input2->getOutput() == false && input->getOutput() == false){
                    return false;}
       else return true;
    };

   if(gateType == 1){ //AND
       if(input2->getOutput() == true && input->getOutput() == true){
           return true;
       }
       else return false;

   };

   if(gateType == 2){ //XOR

       if(input->getOutput() == input2->getOutput()){
           return false;}

       else return true;

   };

}
