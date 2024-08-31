#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "Animal.hpp"

class WrongAnimal {
    
    public :
        WrongAnimal();
        WrongAnimal(const WrongAnimal & cpy);
        ~WrongAnimal();
        WrongAnimal & operator=(WrongAnimal const & cpy);

        std::string getType(void) const;
        void        makeSound(void) const;
    
    protected :
        std::string type;
    
};

#endif