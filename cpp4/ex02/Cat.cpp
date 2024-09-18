#include "Cat.hpp"

Cat::Cat(void) : Animal(){
    std::cout << "a cat appeared" << std::endl;
    type = "Cat";
    cat_idea = new Brain();
    for(int i = 0; i < 100; i++)
        cat_idea->setIdea("i like being cat", i);
}

Cat::Cat(const Cat & cpy) : Animal(cpy){
    std::cout << "a copy of a cat appeared" << std::endl;
    *this = cpy;
}

Cat::~Cat(){
    std::cout << "a cat disappeared" << std::endl;
    delete cat_idea;
}

Cat & Cat::operator=(Cat const &cpy){
    if(this != &cpy){
        type = cpy.type;
        cat_idea = new Brain();
        for(int i = 0; i < 100; i++)
            cat_idea->setIdea(cpy.getIdea(i), i);
    }
    return(*this);
}

std::string Cat::getType() const{return(type);}

void    Cat::setIdea(int i, std::string idea){
    if(i > 99 || i < 0)
        return ;
    cat_idea->setIdea(idea, i);
}

std::string Cat::getIdea(int i) const{
    if(i > 99 || i < 0)
        return (0);
    return(cat_idea->getIdeas(i));
}


void    Cat::makeSound(void) const{
    std::cout << "miaou!" << std::endl;
}