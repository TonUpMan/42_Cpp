#include "Ice.hpp"

Ice::Ice() : AMateria(){
    std::cout << "Ice constructed()" << std::endl;
    type = "ice";
    taken = 0;
}

Ice::Ice(std::string const & type) : AMateria(type){
    std::cout << "Ice constructed(type)" << std::endl;
    this->type = type;
    taken = 0;
}

Ice::Ice(Ice const & cpy) : AMateria(cpy){
    std::cout << "Ice constructed(cpy)" << std::endl;
    *this = cpy;
}

Ice const & Ice::operator=(Ice const & cpy){
    std::cout << "Ice assigned(operator=)" << std::endl;
    if(this != &cpy){
        type = cpy.type;
    }
    return(*this);
}

Ice::~Ice(void){
    std::cout << "Ice destructed()" << std::endl;
}

std::string const & Ice::getType(void) const{return(type);}

AMateria* Ice::clone(void) const{
    return(new Ice("ice"));
}

void Ice::use(ICharacter& target){
    std::cout <<  "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}