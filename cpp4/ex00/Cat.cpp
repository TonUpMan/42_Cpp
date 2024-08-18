#include "Cat.hpp"

Cat::Cat(void) : type("Cat"){}

Cat::Cat(const Cat & cpy){
    *this = cpy;
}

Cat::~Cat(){}

Cat & Cat::operator=(Cat const &cpy){
    if(this != &cpy)
        this->type = cpy.getType();
    return(*this);
}

std::string Cat::getType() const{return(type);}

void    makeSound(void){
    
}