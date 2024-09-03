#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::string name = "bob";
    std::string name1 = "roger";
    std::string name2 = "bernard";
    std::string name3 = "marcel";


    std::cout << "////////// starting construct \\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    ClapTrap    bob(name);
    ScavTrap    bernard;
    ScavTrap    roger(name1);
    ScavTrap    cpyroger(roger);
    bernard = ScavTrap(name2);
    FragTrap    marcel(name3);
    std::cout << std::endl;
    
    std::cout << "////////// starting fight \\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    bob.attack("roger");
    roger.takeDamage(0);
    roger.attack("bob");
    bob.takeDamage(20);
    bernard.attack("roger");
    roger.takeDamage(20);
    marcel.attack("roger");
    roger.takeDamage(30);
    std::cout << std::endl;
    std::cout << "//////////  \\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    std::cout << "ClapTrap " << bob.getname() << " have " << bob.gethit() << "Hp" << std::endl;
    std::cout << "ScavTrap " << roger.getname() << " have " << roger.gethit() << "Hp" << std::endl;
    std::cout << "ScavTrap " << cpyroger.getname() << " have " << cpyroger.gethit() << "Hp" << std::endl;
    std::cout << "ScavTrap " << bernard.getname() << " have " << bernard.gethit() << "Hp" << std::endl;
    std::cout << "FragTrap " << marcel.getname() << " have " << marcel.gethit() << "Hp" << std::endl;
    std::cout << std::endl;
    roger.guardGate();
    bernard.guardGate();
    marcel.highFivesGuys();
    std::cout << std::endl;

    std::cout << "starting destruct" << std::endl;
}