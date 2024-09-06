#include "Ice.hpp"

Ice::Ice(void) : AMateria(){
    std::cout << "Materia Ice was created" << std::endl;
    type = "Ice";
}

Ice::Ice(const Ice & cpy){
    *this = cpy;
}

Ice::~Ice(void){
    std::cout << "Materia "<< type << " destructed" << std::endl;
}

Ice & Ice::operator=(Ice const & cpy){
    if(this != &cpy)
        this->type = cpy.type;
    return (*this);
}

std::string const & Ice::getType(void) const{return(type);}

Ice* Ice::clone(void) const{
    return();
}

void use(ICharacter& target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}