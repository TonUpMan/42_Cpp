#include "AMateria.hpp"

AMateria::AMateria(void){
    std::cout << "AMateria construct" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type){
    std::cout << "AMateria construct" << std::endl;
}

AMateria::AMateria(AMateria const & cpy){*this = cpy;}

AMateria const & AMateria::operator=(AMateria const & cpy){
    if(this != &cpy){
        type = cpy.type;
    }
    return(*this);
}

AMateria::~AMateria(void){}

std::string const & AMateria::getType(void) const{return(type);}

void AMateria::use(ICharacter& target){
    std::cout << target.getName() << " use " << type << std::endl;
}