#ifndef HUMANACLASS_HPP
# define HUMANACLASS_HPP

#include "WeaponClass.hpp"

class HumanA{

    public:
        HumanA(std::string name, Weapon weapon);
        ~HumanA();
        void    attack(void);
        std::string getWeapon(void);
        void        setWeapon(Weapon Weapon);
    
    private:
        std::string name;
        std::string* weapon;
};

#endif