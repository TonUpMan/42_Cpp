#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {

    public:
        MateriaSource(void);
        MateriaSource(MateriaSource const & cpy);
        MateriaSource const & operator=(MateriaSource const & cpy);
        ~MateriaSource();
        
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);

    protected:
        int         nbr_materia;
        AMateria    *inventory[4];
};

#endif