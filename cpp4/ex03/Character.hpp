#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "MateriaSource.hpp"

class Character : public ICharacter{

    public:
        Character(std::string & name);
        Character(Character const & cpy);
        Character const & operator=(Character const & cpy);
        virtual~Character();
        
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

    protected:
        AMateria    *inventory[4];
        AMateria    *floor[8];
        int         nbr_invent;
        int         nbr_trash;
        std::string name;


};

#endif