#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal{

    public:
        Animal(void);
        Animal(const Animal & cpy);
        ~Animal();
        Animal & operator=(Animal const & cpy);
        std::string getType(void) const;
        std::string getSound(void) const;
        void        makeSound(void);

    protected:
        std::string type;
};

#endif