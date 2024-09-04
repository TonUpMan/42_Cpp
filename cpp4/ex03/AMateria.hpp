#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria{
    
    public:
        AMateria(void);
        AMateria(std::string const & type);
        AMateria(const AMateria & cpy);
        virtual ~AMateria(void);
        AMateria & operator=(AMateria const & cpy);
        
        std::string const & getType(void) const;
        virtual AMateria* clone(void) const = 0;
        virtual void use(ICharacter& target);
    
    protected:
        std::string type;
};

#endif