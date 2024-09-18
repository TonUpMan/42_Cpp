#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{

    public:
        Dog(void);
        Dog(const Dog & cpy);
        virtual ~Dog();
        Dog & operator=(Dog const & cpy);
        
        std::string     getType(void) const;
        std::string     getIdea(int i) const;
        void            setIdea(int i, std::string idea);
        virtual void    makeSound(void) const;
    private:
        Brain           *dog_idea;
};

#endif