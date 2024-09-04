#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{
    
    public:
        Ice(void);
        Ice(std::string const & type);
        Ice(const Ice & cpy);
        virtual ~Ice(void);
        Ice & operator=(Ice const & cpy);
        
        std::string const & getType(void) const;
        virtual Ice* clone(void) const = 0;
        virtual void use(ICharacter& target);
};

#endif