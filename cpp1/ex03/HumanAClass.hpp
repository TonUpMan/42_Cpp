#ifndef HUMANACLASS_HPP
# define HUMANACLASS_HPP

#include "WeaponClass.hpp"

class HumanA{

    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();
        void    attack(void);
        std::string getWeapon(void);
    
    private:
        std::string     name;
        Weapon&         ref;
};

#endif