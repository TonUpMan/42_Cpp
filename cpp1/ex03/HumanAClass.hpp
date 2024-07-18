#ifndef HUMANACLASS_HPP
# define HUMANACLASS_HPP

#include "WeaponClass.hpp"

class HumanA{

    public:
        HumanA();
        ~HumanA();
        void    attack(void);
    
    private:
        std::string name;
        std::string weapon;
};

#endif