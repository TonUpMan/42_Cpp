#include "HumanBClass.hpp"

HumanB::HumanB(){
    name ="";
    weapon = "";
}
HumanB::~HumanB(){}

void    HumanB::attack(void){

    std::cout << name << " attacks with their " << weapon << std::endl;
}