#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap(){
    std::cout << "FragTrap was constructed" << std::endl;
    name = "void";
}

FragTrap::FragTrap(std::string & name) : ClapTrap(name){
    std::cout << "FragTrap " << name << " was constructed" << std::endl;
    this->name = name;
    Hit = 100;
    Energy = 100;
    Attack = 30;
}

FragTrap::FragTrap(FragTrap & cpy) : ClapTrap(cpy){
    std::cout << "FragTrap " << cpy.getname() << " was constructed(copy)" << std::endl;    
    *this = cpy;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap " << this->getname() << " was destructed" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & cpy){

    if(this != &cpy){
        name = cpy.getname();
        Hit = cpy.gethit();
        Energy = cpy.getenergy();
        Attack = cpy.getattack();
    }
    return (*this);
}

void FragTrap::attack(const std::string& target){
    if(Energy && Hit)
    {
        std::cout << "FragTrap " << name; 
        std::cout << " attacks " << target;
        std::cout << " , causing " << Attack;
        std::cout << " points of damage!" << std::endl;
        Energy--;
    }
    if(Energy <= 0)
        std::cout << "Energy too low" << std::endl;
}

void    FragTrap::highFivesGuys(void){
    std::cout << "Wouhou, give me high five dude!!" << std::endl;
}