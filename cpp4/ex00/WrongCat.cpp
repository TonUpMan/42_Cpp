#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal(){
    std::cout << "a wrong cat appeared" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat & cpy) : WrongAnimal(cpy){
    std::cout << "a copy of a wrong cat appeared" << std::endl;
    *this = cpy;
}

WrongCat::~WrongCat(){
    std::cout << "a wrong cat disappeared" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const &cpy){
    if(this != &cpy)
        this->type = cpy.getType();
    return(*this);
}

std::string WrongCat::getType() const{return(type);}

void    WrongCat::makeSound(void) const{
    std::cout << "wrong miaou!" << std::endl;
}