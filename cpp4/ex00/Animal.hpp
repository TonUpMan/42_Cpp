#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal{

    public:
        Animal(void);
        Animal(const Animal &cpy);
        ~Animal(void);
        Animal &operator=(Animal &cpy);
        std::string getType(void);

    protected:
        std::string type;
};

#endif