#ifndef HUMANBCLASS_HPP
# define HUMANBCLASS_HPP

#include "WeaponClass.hpp"

class HumanB{

    public:
        HumanB();
        ~HumanB();
        void    attack(void);
    
    private:
        std::string name;
        std::string weapon;
};

#endif