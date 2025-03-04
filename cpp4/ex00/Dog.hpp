#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{

    public:
        Dog(void);
        Dog(const Dog & cpy);
        virtual ~Dog();
        Dog & operator=(Dog const & cpy);
        
        std::string     getType(void) const;
        virtual void    makeSound(void) const; 
};

#endif