
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : IMateriaSource(){
    std::cout << "MateriaSource constructed()" << std::endl;
    nbr_materia = 0;
    for(int i = 0; i < 4; i++)
        inventory[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const & cpy) : IMateriaSource(cpy){
    std::cout << "MateriaSource constructed(cpy)" << std::endl;
    *this = cpy;
}

MateriaSource const & MateriaSource::operator=(MateriaSource const & cpy){
    std::cout << "MateriaSource assigned(operator=)" << std::endl;
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
    std::cout << "MateriaSource destructed()" << std::endl;
        for(int i = 0; i < 4; i++)
            if(inventory[i])
                delete inventory[i];
}

void MateriaSource::learnMateria(AMateria* m){
    if(nbr_materia < 3){
        inventory[nbr_materia] = m;
        if(inventory[nbr_materia])
            std::cout << inventory[nbr_materia]->getType() << " learned" << std::endl;
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