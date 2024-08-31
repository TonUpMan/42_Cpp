#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

    public :
        WrongCat(void);
        WrongCat(const WrongCat & cpy);
        ~WrongCat();
        WrongCat & operator=(WrongCat const & cpy);
        
        std::string     getType(void) const;
        void            makeSound(void) const;
};

#endif