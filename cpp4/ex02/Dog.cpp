#include "Dog.hpp"

Dog::Dog(void) : Animal(){
    std::cout << "a dog appeared" << std::endl;
    type = "Dog";
    dog_idea = new Brain();
    for(int i = 0; i < 100; i++)
        dog_idea->setIdea("i like being dog", i);
}

Dog::Dog(const Dog & cpy) : Animal(cpy){
    std::cout << "a copy of a dog appeared" << std::endl;
    *this = cpy;
}

Dog::~Dog(){
    std::cout << "a dog disappeared" << std::endl;
    delete dog_idea;
}

Dog & Dog::operator=(Dog const &cpy){
    if(this != &cpy){
        this->type = cpy.type;
        dog_idea = new Brain();
        for(int i = 0; i < 100; i++)
            dog_idea->setIdea(cpy.getIdea(i), i);
    }
    return(*this);
}

std::string Dog::getType() const{return(type);}

std::string Dog::getIdea(int i) const{
    if(i > 99 || i < 0)
        return (0);
    return(dog_idea->getIdeas(i));
}

void    Dog::setIdea(int i, std::string idea){
    if(i > 99 || i < 0)
        return ;
    dog_idea->setIdea(idea, i);
}

void    Dog::makeSound(void) const{
    std::cout << "wouaf!" << std::endl;
}