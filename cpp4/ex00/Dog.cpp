#include "Dog.hpp"

Dog::Dog(void) : Animal(){
    std::cout << "an dog appeared" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog & cpy) : Animal(cpy){
    std::cout << "a copy of a dog appeared" << std::endl;
    *this = cpy;
}

Dog::~Dog(){
    std::cout << "an dog disappeared" << std::endl;
}

Dog & Dog::operator=(Dog const &cpy){
    if(this != &cpy)
        this->type = cpy.getType();
    return(*this);
}

std::string Dog::getType() const{return(type);}

void    Dog::makeSound(void) const{
    std::cout << "wouaf!" << std::endl;
}