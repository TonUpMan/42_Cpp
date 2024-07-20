#ifndef HUMANBCLASS_HPP
# define HUMANBCLASS_HPP

#include "WeaponClass.hpp"

class HumanB{

    public:
        HumanB(std::string name);
        ~HumanB();
        void    attack(void);
        std::string getWeapon(void);
        void        setWeapon(Weapon weapon);
    
    private:
        std::string     name;
        Weapon*         ptr;
};

#endif