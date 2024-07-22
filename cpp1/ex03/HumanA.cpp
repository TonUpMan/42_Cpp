#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type) : name(name), ref(type) {}
HumanA::~HumanA(){}

std::string HumanA::getWeapon(void){return(ref.getType());}

void    HumanA::attack(void){
   
    if(ref.getType().empty()){
        std::cout << name << " attacks with their " << "hand" << std::endl;
        return ;
    }
    std::cout << name << " attacks with their " << ref.getType() << std::endl;
}
