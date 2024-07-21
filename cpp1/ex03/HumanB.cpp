#include "HumanBClass.hpp"

HumanB::HumanB(std::string name){
    this->name = name;
    ptr = NULL;
}
HumanB::~HumanB(){}

void        HumanB::setWeapon(Weapon& weapon){ptr = &weapon;}
std::string HumanB::getWeapon(void){return (ptr->getType());}

void    HumanB::attack(void){
  
    if(ptr->getType().empty()){
        std::cout << name << " attacks with their " << "hand" << std::endl;
        return ;
    }
    std::cout << name << " attacks with their " << ptr->getType() << std::endl;
}