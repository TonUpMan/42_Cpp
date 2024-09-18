#include "Animal.hpp"

Animal::Animal() : type("animal"){
    std::cout << "an animal appeared" << std::endl;
}

Animal::Animal(const Animal & cpy){
    std::cout << "a copy of an animal appeared" << std::endl;
    *this = cpy;
}

Animal::~Animal(){
    std::cout << "an animal disappeared" << std::endl;
}

Animal & Animal::operator=(Animal const &cpy){
    if(this != &cpy)
        this->type = cpy.getType();
    return(*this);
}

std::string Animal::getType() const{return(type);}
