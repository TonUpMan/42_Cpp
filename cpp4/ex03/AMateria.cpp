#include "AMateria.hpp"

AMateria::AMateria(void){
    std::cout << "default constructeur called" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type){
    std::cout << "Materia "<< type << " constructed" << std::endl;
}

AMateria::AMateria(const AMateria & cpy){
    *this = cpy;
}

AMateria::~AMateria(void){
    std::cout << "Materia "<< type << " destructed" << std::endl;
}

AMateria & AMateria::operator=(AMateria const & cpy){
    if(this != &cpy){
        this->type = cpy.type;
    }
    return (*this);
}

std::string const & AMateria::getType() const{return(type);}

AMateria* AMaterie::clone(void) const{
    return(new AMateria);
}
void AMaterie::use(ICharacter& target){

}