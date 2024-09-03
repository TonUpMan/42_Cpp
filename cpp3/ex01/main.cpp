#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::string name = "bob";
    std::string name1 = "roger";
    std::string name2 = "bernard";

    std::cout << "////////// starting construct \\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    ClapTrap    bob(name);
    ScavTrap    bernard;
    ScavTrap    roger(name1);
    ScavTrap    cpyroger(roger);
    bernard = ScavTrap(name2);
    std::cout << std::endl;
    
    std::cout << "////////// starting fight \\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    bob.attack("roger");
    roger.takeDamage(0);
    roger.attack("bob");
    bob.takeDamage(20);
    bernard.attack("roger");
    roger.takeDamage(20);
    std::cout << std::endl;
    std::cout << "//////////  \\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    std::cout << "ClapTrap " << bob.getname() << " have " << bob.gethit() << "Hp" << std::endl;
    std::cout << "ScavTrap " << roger.getname() << " have " << roger.gethit() << "Hp" << std::endl;
    std::cout << "ScavTrap " << cpyroger.getname() << " have " << cpyroger.gethit() << "Hp" << std::endl;
    std::cout << "ScavTrap " << bernard.getname() << " have " << bernard.gethit() << "Hp" << std::endl;
    std::cout << std::endl;
    roger.guardGate();
    bernard.guardGate();
    std::cout << std::endl;

    std::cout << "starting destruct" << std::endl;
}