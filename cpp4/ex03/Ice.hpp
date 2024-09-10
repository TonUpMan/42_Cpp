#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{

    public:
        Ice(std::string const & type);
        Ice(Ice const & cpy);
        Ice const & operator=(Ice const & cpy);
        ~Ice(void);
        
        std::string const & getType(void) const;
        virtual AMateria* clone(void) const;
        virtual void use(ICharacter& target);

};

#endif