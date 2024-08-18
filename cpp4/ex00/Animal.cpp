#include "Animal.hpp"

Animal::Animal(void) : type(""){}

Animal::Animal(const Animal & cpy){
    *this = cpy;
}

Animal::~Animal(){}

Animal & Animal::operator=(Animal const &cpy){
    if(this != &cpy)
        this->type = cpy.getType();
    return(*this);
}

std::string Animal::getType() const{return(type);}

void    makeSound(void){
    
}