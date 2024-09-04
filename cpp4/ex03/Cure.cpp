//Cure : "* heals <name>’s wounds *"

#include "Cure.hpp"

Cure::Cure(void) : AMateria(){
    std::cout << "Materia cure was created" << std::endl;
    type = "cure";
}

Cure::Cure(const Cure & cpy){
    *this = cpy;
}

Cure::~Cure(void){
    std::cout << "Materia "<< type << " destructed" << std::endl;
}

Cure & Cure::operator=(Cure const & cpy){
    if(this != &cpy)
        this->type = cpy.type;
    return (*this);
}