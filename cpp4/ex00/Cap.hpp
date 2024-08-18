#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{

    public:
        Cat(void);
        Cat(const Cat & cpy);
        ~Cat();
        Cat & operator=(Cat const & cpy);
        std::string getType(void) const;
        std::string getSound(void) const;
        void        makeSound(void); 
};

#endif