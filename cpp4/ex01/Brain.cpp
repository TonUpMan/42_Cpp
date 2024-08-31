#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain constructed" << std::endl;
}

Brain::Brain(const Brain & cpy){
    std::cout << "Brain constructed(copy)" << std::endl;
    *this = cpy;
}

Brain::~Brain(){
    std::cout << "Brain destructed" << std::endl;
}

Brain & Brain::operator=(Brain const & cpy){

    if(this != &cpy){
        *this->ideas = cpy.getIdeas();
    }
    return(*this);
}

std::string *Brain::getIdeas() const{return(&ideas);}
