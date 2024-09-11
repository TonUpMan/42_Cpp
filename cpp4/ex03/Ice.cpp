#include "Ice.hpp"

Ice::Ice() : AMateria(){
    std::cout << "Ice construct" << std::endl;
    type = "ice";
}

Ice::Ice(std::string const & type) : AMateria(type){
    std::cout << "Ice construct" << std::endl;
    this->type = type;
}

Ice::Ice(Ice const & cpy) : AMateria(cpy){
    *this = cpy;
}

Ice const & Ice::operator=(Ice const & cpy){
    if(this != &cpy){
        type = cpy.type;
    }
    return(*this);
}

Ice::~Ice(void){}

std::string const & Ice::getType(void) const{return(type);}

AMateria* Ice::clone(void) const{
    return(new Ice("Ice"));
}

void Ice::use(ICharacter& target){
    std::cout <<  "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}