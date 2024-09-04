#include "Cat.hpp"

Cat::Cat(void) : Animal(){
    std::cout << "a cat appeared" << std::endl;
    type = "Cat";
    cat_idea = new Brain();
    for(int i = 0; i < 100; i++)
        cat_idea->setIdea("i like being cat", i);
}

Cat::Cat(const Cat & cpy){
    std::cout << "a copy of a cat appeared" << std::endl;
    *this = cpy;
}

Cat::~Cat(){
    std::cout << "a cat disappeared" << std::endl;
    delete cat_idea;
}

Cat & Cat::operator=(Cat const &cpy){
    if(this != &cpy)
        this->type = cpy.getType();
    return(*this);
}

std::string Cat::getType() const{return(type);}

void    Cat::makeSound(void) const{
    std::cout << "miaou!" << std::endl;
}