#include "Animal.hpp"

Animal::Animal() : type("animal"){}

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

void    Animal::makeSound(void) const{
    std::cout << "sound of animal" << std::endl;
}