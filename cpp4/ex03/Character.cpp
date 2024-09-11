#include "Character.hpp"

Character::Character(std::string const & name) : name(name){
    std::cout << "Character construct" << std::endl;
    nbr_invent = 0; 
    nbr_trash = 0;
}

Character::Character(Character const & cpy){
    *this = cpy;
}

Character const & Character::operator=(Character const & cpy){
    if(this != &cpy){
        this->name = cpy.name;
        this->nbr_invent = cpy.nbr_invent;
        if(nbr_invent){
            for(int i = 0; i < nbr_invent; i++){
                this->inventory[i] = cpy.inventory[i];
            }
        }
    }
    return(*this);
}

Character::~Character(){
    for(int i = 0; i < nbr_trash; i++)
        delete floor[i];
}

std::string const & Character::getName(void) const{return(name);}

void Character::equip(AMateria* m){
    if(nbr_invent < 3){
        inventory[nbr_invent] = m;
        if(inventory[nbr_invent])
            std::cout << inventory[nbr_invent]->getType() << " add to inventory" << std::endl;
        else   
            std::cout << "t'es nul" << std::endl;
        nbr_invent++;
    }
}

void Character::unequip(int idx){
    if((idx < 0 || idx > 3) || nbr_invent == 0){
        return ;
    }
    if(nbr_trash == 7){
        std::cout << "the ground is full!" << std::endl;
        return ;
    }
    floor[nbr_trash] = inventory[idx];
    std::cout << floor[nbr_trash]->getType() << " was throw" << std::endl;
    inventory[idx] = 0;
    nbr_trash++;
    nbr_invent--;
}

void Character::use(int idx, ICharacter& target){
    if (inventory[idx])
    {
        inventory[idx]->use(target);
        delete inventory[idx];
    }
    nbr_invent--;
}