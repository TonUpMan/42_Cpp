#include "HumanBClass.hpp"

HumanB::HumanB(std::string name){
    this->name = name;
    weapon = 0;
}
HumanB::~HumanB(){}

std::string HumanB::getWeapon(void){return (*weapon);}
void        HumanB::setWeapon(Weapon weapon){this->weapon = weapon.getType();}

void    HumanB::attack(void){
    std::cout << name << " attacks with their " << *weapon << std::endl;
}