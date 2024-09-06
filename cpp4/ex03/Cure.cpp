#include "Cure.hpp"

Cure::Cure(void) : AMateria(){
    std::cout << "Materia cure was created" << std::endl;
    type = "cure";
}

Cure::Cure(std::string const & type) : AMateria(type){
    std::cout << "Materia " << type << " was created" << std::endl;
}

Cure::Cure(const Cure & cpy){
    std::cout << "Materia cure was created(copy)" << std::endl;
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

std::string const & Cure::getType(void) const{return(type);}


Cure* Cure::clone(void) const{

}

void Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << " ’s wounds *" << std::endl;
}

