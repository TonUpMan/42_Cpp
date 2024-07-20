#include "HumanAClass.hpp"

HumanA::HumanA(std::string name, Weapon type){
    this->name = name;
    weapon = type.getType();
}
HumanA::~HumanA(){}

std::string HumanA::getWeapon(void){return (*weapon);}
void        HumanA::setWeapon(Weapon weapon){this->weapon = weapon.getType();}

void    HumanA::attack(void){
    std::cout << name << " attacks with their " << *weapon << std::endl;
}
