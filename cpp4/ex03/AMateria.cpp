#include "AMateria.hpp"

AMateria::AMateria(void){
    std::cout << "AMateria constructed()" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type){
    std::cout << "AMateria constructed(type)" << std::endl;
}

AMateria::AMateria(AMateria const & cpy){
    std::cout << "AMateria constructed(cpy)" << std::endl;
    *this = cpy;
}

AMateria const & AMateria::operator=(AMateria const & cpy){
    std::cout << "AMateria assigned(operator=)" << std::endl;
    if(this != &cpy){
        type = cpy.type;
    }
    return(*this);
}

AMateria::~AMateria(void){
    std::cout << "AMateria destructed()" << std::endl;
}

std::string const & AMateria::getType(void) const{return(type);}
int     AMateria::getTake(void){return(taken);}
void    AMateria::setTake(void){taken = 1;}

void AMateria::use(ICharacter& target){
    std::cout << target.getName() << " use " << type << std::endl;
}