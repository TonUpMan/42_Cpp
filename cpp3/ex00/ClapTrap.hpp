
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap{

    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap & cpy);
        ~ClapTrap();
        ClapTrap & operator=(ClapTrap const & cpy);

        void        attack(const std::string &target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
        std::string getname(void) const;
        int         gethit(void) const;
        int         getenergy(void) const;
        int         getattack(void) const;
    
    private:
        std::string name;
        int         Hit;
        int         Energy;
        int         Attack;
};


#endif