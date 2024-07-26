#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon{

    public:
        Weapon(std::string type);
        ~Weapon();
        std::string     getType(void) const;
        void            setType(std::string type);

    private:
        std::string type;

};

#endif