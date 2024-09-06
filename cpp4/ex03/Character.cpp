#include "Character.hpp"

Character::Character(std::string & name) : name(name){}

Character::Character(Character const & cpy){
    *this = cpy;
}

Character::~Character(){}

Character & Character::operator=(Character const & cpy){
    if(this != &cpy)
        name = cpy.name;
    return (*this);
}