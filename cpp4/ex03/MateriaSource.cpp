
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : IMateriaSource(){
    std::cout << "MateriaSource construct" << std::endl;
    nbr_materia = 0;
}

MateriaSource::MateriaSource(MateriaSource const & cpy) : IMateriaSource(cpy){
    *this = cpy;
}

MateriaSource const & MateriaSource::operator=(MateriaSource const & cpy)
{
    if(this != &cpy)
    {
        if(cpy.nbr_materia)
        {
            for(int i = 0; i < cpy.nbr_materia; i++)
            {
                inventory[i] = cpy.inventory[i];
                nbr_materia++;
            }
        }
    }
    return (*this);
}

MateriaSource::~MateriaSource(){
    if(nbr_materia){
        for(int i = 0; i < nbr_materia; i++)
            delete inventory[i];
    }
}

void MateriaSource::learnMateria(AMateria* m){
    if(nbr_materia < 3){
        inventory[nbr_materia] = m;
        if(inventory[nbr_materia])
            std::cout << inventory[nbr_materia]->getType() << " learned" << std::endl;
        else   
            std::cout << "t'es nul+++" << std::endl;
        nbr_materia++;
        return;
    }
    std::cout << "Source is full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type){
    for(int i = 0; i < nbr_materia; i++){
        if(inventory[i]->getType() == type)
            return(inventory[i]->clone());
    }
    std::cout << "this source does not know " << type << std::endl;
    return (0);
}