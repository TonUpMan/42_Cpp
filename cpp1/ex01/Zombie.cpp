#include "Zombie.hpp"

Zombie::Zombie(){name = "";}
Zombie::~Zombie(){ std::cout << name << " was destroyed" << std::endl;}

std::string Zombie::get_name(void){return (name);}
void        Zombie::set_name(std::string name){this->name = name;}

void    Zombie::announce(void){

    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}