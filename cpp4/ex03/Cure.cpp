#include "Cure.hpp"

Cure::Cure(void): AMateria(){
    std::cout << "Cure constructed()" << std::endl;
    type = "cure";
    taken = 0;
}

Cure::Cure(std::string const & type) : AMateria(type){
    std::cout << "Cure constructed(type)" << std::endl;
    this->type = type;
    taken = 0;
}

Cure::Cure(Cure const & cpy) : AMateria(cpy){
    std::cout << "Cure constructed(cpy)" << std::endl;
    *this = cpy;
}

Cure const & Cure::operator=(Cure const & cpy){
    std::cout << "Cure assigned(operator=)" << std::endl;
    if(this != &cpy){
        type = cpy.type;
    }
    return(*this);
}

Cure::~Cure(void){
    std::cout << "Cure destructed()" << std::endl;
}

std::string const & Cure::getType(void) const{return(type);}

AMateria* Cure::clone(void) const{
    return(new Cure("cure"));
}

void Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}