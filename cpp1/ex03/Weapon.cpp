#include "Weapon.hpp"

Weapon::Weapon(std::string weapon){
    this->type = weapon;
}
Weapon::~Weapon(){}

std::string Weapon::getType(void) const{return (this->type);}
void        Weapon::setType(std::string type){this->type = type;}
