
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
    std::cout << "default constructor called" << std::endl;
    Hit = 10;
    Energy = 10;
    Attack = 0;
}

ClapTrap::ClapTrap(std::string name){
    std::cout << "string constructor called" << std::endl;
    this->name = name;
    Hit = 10;
    Energy = 10;
    Attack = 0;
}

ClapTrap::ClapTrap(ClapTrap & cpy){
    std::cout << "copy constructor called" << std::endl;    
    *this = cpy;
}

ClapTrap::~ClapTrap(){
    std::cout << "destructor called" << std::endl;
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
    else
        std::cout << "Energy too low" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    std::cout << "ClapTrap " << name;
    std::cout << " received " << amount;
    std::cout << " damage" << std::endl;
    Hit -= amount;  
}

void ClapTrap::beRepaired(unsigned int amount){
    if(Energy && Hit)
    {
        std::cout << "ClapTrap " << name;
        std::cout << " to get back " << amount;
        std::cout << " Hp" << std::endl;
        Hit += amount;
    }
    else
       std::cout << "Energy too low" << std::endl; 
}

std::string ClapTrap::getname(void) const{return(name);}
int         ClapTrap::gethit(void) const{return(Hit);}
int         ClapTrap::getenergy(void) const{return(Energy);}
int         ClapTrap::getattack(void) const{return(Attack);}
