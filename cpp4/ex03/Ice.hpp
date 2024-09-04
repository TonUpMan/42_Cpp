#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{

    public :
        Ice(void);
        Ice(const Ice & cpy);
        ~Ice(void);
        Ice & operator=(Ice const & cpy);
};

#endif