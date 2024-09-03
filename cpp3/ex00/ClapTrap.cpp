
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
    std::cout << "ClapTrap was constructed" << std::endl;
    name = "void";
}

ClapTrap::ClapTrap(std::string & name) : name(name) {
    std::cout << "ClapTrap " << name << " was constructed" << std::endl;
    Hit = 10;
    Energy = 10;
    Attack = 0;
}

ClapTrap::ClapTrap(const ClapTrap & cpy){
    std::cout << "ClapTrap " << cpy.getname() << " was constructed(copy)" << std::endl;    
    *this = cpy;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap " << this->getname() << " was destructed" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & cpy){

    if(this != &cpy){
        name = cpy.getname();
        Hit = cpy.gethit();
        Energy = cpy.getenergy();
        Attack = cpy.getattack();
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target){
    if(Energy && Hit)
    {
        std::cout << "ClapTrap " << name; 
        std::cout << " attacks " << target;
        std::cout << " , causing " << Attack;
        std::cout << " points of damage!" << std::endl;
        Energy--;
    }
    if(Energy <= 0)
        std::cout << "Energy too low" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    std::cout << "ClapTrap " << name;
    std::cout << " received " << amount;
    std::cout << " damage" << std::endl;
    Hit -= amount;
    if(Hit <= 0){
        Hit = 0;
        std::cout << "ClapTrap " << name << " died" << std::endl;
    }  
}

void ClapTrap::beRepaired(unsigned int amount){
    if(Energy && Hit)
    {
        std::cout << "ClapTrap " << name;
        std::cout << " to get back " << amount;
        std::cout << " Hp" << std::endl;
        Hit += amount;
        Energy--;
    }
    if (Energy <= 0)
        std::cout << "Energy too low" << std::endl; 
}

std::string ClapTrap::getname(void) const{return(name);}
int         ClapTrap::gethit(void) const{return(Hit);}
int         ClapTrap::getenergy(void) const{return(Energy);}
int         ClapTrap::getattack(void) const{return(Attack);}
