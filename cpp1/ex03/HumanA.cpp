#include "HumanAClass.hpp"

HumanA::HumanA(std::string name, Weapon& type) : name(name), ref(type) {}
HumanA::~HumanA(){}

std::string HumanA::getWeapon(void){return(ref.getType());}

void    HumanA::attack(void){
    std::cout << name << " attacks with their " << ref.getType() << std::endl;
}
