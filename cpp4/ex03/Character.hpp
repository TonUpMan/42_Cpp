#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter{

    public:
        Character(std::string & name);
        Character(Character const & cpy);
        ~Character();
        Character & operator=(Character const & cpy);
    
    protected:
        std::string name;
};

#endif