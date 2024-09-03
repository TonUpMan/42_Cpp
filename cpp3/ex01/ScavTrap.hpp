#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

    public:
        ScavTrap(void);
        ScavTrap(std::string & name);
        ScavTrap(ScavTrap & cpy);
        ~ScavTrap();
        ScavTrap & operator=(const ScavTrap & cpy);

        void    attack(const std::string &target);
        void    guardGate(void);

    private:
        int guard_mode;

};

#endif