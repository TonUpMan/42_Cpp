#include "Animal.hpp"


Animal::Animal(void) : type(""){}

Animal::Animal(const Animal &cpy){
    *this = cpy;
}

~Animal();

Animal & Animal::operator=(Animal &cpy){
    if(this != cpy)
        this->type = cpy.getType();
}

std::string Animal::getType(){return(type);}