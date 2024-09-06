#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{
    
    public:
        Cure(std::string const & type);
        Cure(const Cure & cpy);
        virtual ~Cure(void);
        Cure & operator=(Cure const & cpy);
        
        std::string const & getType(void) const;
        virtual Cure* clone(void) const = 0;
        virtual void use(ICharacter& target);
    private:
        Cure(void);
};

#endif