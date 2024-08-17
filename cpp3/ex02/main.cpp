#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap    bob("bob");
    ScavTrap    roger("roger");
    FragTrap    bernard("bernard");
    
    bob.attack("roger");
    roger.takeDamage(0);
    roger.attack("bob");
    bob.takeDamage(20);
    roger.guardGate();
    bernard.highFivesGuys();

}