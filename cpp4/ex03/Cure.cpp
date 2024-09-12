#include "Cure.hpp"

Cure::Cure(void): AMateria(){
    std::cout << "Cure construct" << std::endl;
    type = "cure";
    taken = 0;
}

Cure::Cure(std::string const & type) : AMateria(type){
    std::cout << "Cure construct" << std::endl;
    this->type = type;
    taken = 0;
}

Cure::Cure(Cure const & cpy) : AMateria(cpy){
    *this = cpy;
}

Cure const & Cure::operator=(Cure const & cpy){
    if(this != &cpy){
        type = cpy.type;
    }
    return(*this);
}

Cure::~Cure(void){}

std::string const & Cure::getType(void) const{return(type);}

AMateria* Cure::clone(void) const{
    return(new Cure("cure"));
}

void Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}