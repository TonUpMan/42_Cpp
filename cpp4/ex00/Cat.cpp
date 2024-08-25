#include "Cat.hpp"

Cat::Cat(void) : Animal(){
    type = "Cat";
}

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

void    Cat::makeSound(void) const{
    std::cout << "miaou!" << std::endl;
}