#include "Dog.hpp"

Dog::Dog(void) : Animal(){
    std::cout << "a dog appeared" << std::endl;
    type = "Dog";
    dog_idea = new Brain();
    for(int i = 0; i < 100; i++)
        dog_idea->setIdea("i like being dog", i);
}

Dog::Dog(const Dog & cpy){
    std::cout << "a copy of a dog appeared" << std::endl;
    *this = cpy;
}

Dog::~Dog(){
    std::cout << "a dog disappeared" << std::endl;
    delete dog_idea;
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