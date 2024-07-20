#ifndef WEAPONCLASS_HPP
# define WEAPONCLASS_HPP

#include <string>
#include <iostream>

class Weapon{

    public:
        Weapon(std::string type);
        ~Weapon();
        std::string* getType(void);
        void        setType(std::string type);

    private:
        std::string type;

};

#endif