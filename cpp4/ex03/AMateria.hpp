#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    public:
        AMateria(void);
        AMateria(std::string const & type);
        AMateria(AMateria const & cpy);
        AMateria const & operator=(AMateria const & cpy);
        virtual ~AMateria(void);
        
        std::string const & getType(void) const;
        virtual AMateria* clone(void) const = 0;
        virtual void use(ICharacter& target);
    
    protected:
        std::string type;
};

#endif