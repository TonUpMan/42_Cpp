#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal{

    public:
        Animal();
        Animal(const Animal & cpy);
        virtual ~Animal();
        Animal & operator=(Animal const & cpy);
        
        std::string     getType(void) const;
        virtual void    makeSound(void) const = 0;

    protected:
        std::string type;
};

#endif