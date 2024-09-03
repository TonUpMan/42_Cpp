#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(){
    std::cout << "ScavTrap was constructed" << std::endl;
    name = "void";
    guard_mode = 0;
}

ScavTrap::ScavTrap(std::string & name) : ClapTrap(name){
    std::cout << "ScavTrap " << name << " was constructed" << std::endl;
    Hit = 100;
    Energy = 50;
    Attack = 20;
    guard_mode = 0;
}

ScavTrap::ScavTrap(ScavTrap & cpy) : ClapTrap(cpy){
    std::cout << "ScavTrap " << cpy.getname() << " was constructed(copy)" << std::endl;    
    *this = cpy;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap " << this->getname() << " was destructed" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & cpy){

    if(this != &cpy){
        name = cpy.getname();
        Hit = cpy.gethit();
        Energy = cpy.getenergy();
        Attack = cpy.getattack();
    }
    return (*this);
}

void ScavTrap::attack(const std::string& target){
    if(Energy && Hit)
    {
        std::cout << "ScavTrap " << name; 
        std::cout << " attacks " << target;
        std::cout << " , causing " << Attack;
        std::cout << " points of damage!" << std::endl;
        Energy--;
    }
    else
        std::cout << "Energy too low" << std::endl;
}

void    ScavTrap::guardGate(void){
    if(Energy && Hit){
        if(guard_mode){
            std::cout << name << " is no longer in Gate keeper mode" << std::endl;
            guard_mode = 0;
        }
        else{
            std::cout << name << " is now in Gate keeper mode" << std::endl;
            guard_mode = 1;
        }
    }
}