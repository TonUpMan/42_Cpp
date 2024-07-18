#include "WeaponClass.hpp"

Weapon::Weapon(){}
Weapon::~Weapon(){}

std::string Weapon::getType(void){return (type);}
void        Weapon::setType(std::string type){this->type = type;}