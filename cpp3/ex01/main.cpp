#include "ClapTrap.hpp"

int main()
{
    ClapTrap    bob("bob");
    ClapTrap    bernard;
    ClapTrap    cpybob(bob);

    bernard = ClapTrap("bernard");
    bob.attack("bernard");
    bernard.takeDamage(1);
    cpybob.attack("bernard");
    bernard.takeDamage(1);
    bernard.beRepaired(1);
}