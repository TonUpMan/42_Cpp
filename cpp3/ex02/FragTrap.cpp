#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    if (name.empty())
        name = "Frag Doe";
    std::cout << "FragTrap " << name << " was constructed" << std::endl;
    this->name = name;
    Hit = 100;
    Energy = 50;
    Attack = 20;
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
    else
        std::cout << "Energy too low" << std::endl;
}

void    FragTrap::highFivesGuys(void){
    std::cout << "Wouhou, give me high five bruh!!" << std::endl;
}