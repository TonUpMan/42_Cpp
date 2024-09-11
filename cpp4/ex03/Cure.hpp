#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{

    public:
        Cure(void);
        Cure(std::string const & type);
        Cure(Cure const & cpy);
        Cure const & operator=(Cure const & cpy);
        ~Cure(void);
        
        std::string const & getType(void) const;
        virtual AMateria* clone(void) const;
        virtual void use(ICharacter& target);

};

#endif