#include "HumanAClass.hpp"

HumanA::HumanA(){
    name ="";
    weapon = "";
}
HumanA::~HumanA(){}

void    HumanA::attack(void){

    std::cout << name << " attacks with their " << weapon << std::endl;
}
