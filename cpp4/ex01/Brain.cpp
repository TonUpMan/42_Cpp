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
        for(int i = 0; i < 100; i++)
            this->ideas[i] = cpy.getIdeas(i);
    }
    return(*this);
}

std::string Brain::getIdeas(int i) const{
    if(i >= 100 && i < 0)
        return(NULL);   
    return(ideas[i]);
}

void    Brain::setIdea(std::string & idea, int index){
    if(index >= 100 && index < 0)
        return; 
    ideas[index] = idea; 
}
