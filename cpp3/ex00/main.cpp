#include "ClapTrap.hpp"

int main()
{
    std::string name = "Bob";
    std::string name1 = "Bernard";

    std::cout << "////////// starting construct \\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    ClapTrap    bob(name);
    ClapTrap    bernard;
    ClapTrap    cpybob(bob);
    bernard = ClapTrap(name1);
    std::cout << std::endl;

    std::cout << "////////// starting fight \\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    bob.attack("bernard");
    bernard.takeDamage(1);
    std::cout << "bernard's hit egual: " << bernard.gethit() << " Hp" << std::endl;
    bernard.beRepaired(1);
    std::cout << "bernard's hit egual: " << bernard.gethit() << " Hp" << std::endl;
    std::cout << "bernard's energy egual: " << bernard.getenergy() << " energy pts" << std::endl;
    cpybob.attack("bernard");
    bernard.takeDamage(10);
    std::cout << "bernard's hit egual: " << bernard.gethit() << " Hp" << std::endl;
    bernard.attack("bob");
    std::cout << std::endl;

    std::cout << "starting destruct" << std::endl;
}