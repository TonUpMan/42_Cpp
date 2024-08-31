#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("animal"){
    std::cout << "a wrong animal appeared" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & cpy){
    std::cout << "a copy of a wrong animal appeared" << std::endl;
    *this = cpy;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "a wrong animal disappeared" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & cpy){
    if(this != &cpy)
        this->type = cpy.getType();
    return(*this);
}

std::string WrongAnimal::getType(void) const{return (type);}

void    WrongAnimal::makeSound(void) const{
    std::cout << "sound of wrong animal" << std::endl;
}