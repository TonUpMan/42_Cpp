#include "ClapTrap.hpp"

int main()
{
    ClapTrap    bob("bob");
    ClapTrap    bernard;
    ClapTrap    cpybob(bob);

    bob.attack("bernard");
    bernard.takeDamage(1);
    cpybob.attack("bernard");
    bernard.takeDamage(1);
    std::cout << "bernard's hit egual: " << bernard.gethit() << " Hp" << std::endl;
    bernard.beRepaired(1);
    std::cout << "bernard's hit egual: " << bernard.gethit() << " Hp" << std::endl;
    std::cout << "bernard's energy egual: " << bernard.getenergy() << " energy pts" << std::endl;
}