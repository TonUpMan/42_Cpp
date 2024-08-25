#include "Dog.hpp"

Dog::Dog(void) : Animal(){
    type = "Dog";
}

Dog::Dog(const Dog & cpy){
    *this = cpy;
}

Dog::~Dog(){}

Dog & Dog::operator=(Dog const &cpy){
    if(this != &cpy)
        this->type = cpy.getType();
    return(*this);
}

std::string Dog::getType() const{return(type);}

void    Dog::makeSound(void) const{
    std::cout << "wouaf!" << std::endl;
}