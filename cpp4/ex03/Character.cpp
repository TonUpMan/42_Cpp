#include "Character.hpp"

Character::Character(std::string const & name) : name(name){
    std::cout << "Character construct" << std::endl;
    nbr_invent = 0; 
    nbr_trash = 0;
    for(int i = 0; i < 4; i++)
        inventory[i] = 0;
}

Character::Character(Character const & cpy){

    name = cpy.name;
    nbr_invent = cpy.nbr_invent; 
    nbr_trash = cpy.nbr_trash;
    if(nbr_invent){
        for(int i = 0; i < 4; i++){
            if(cpy.inventory[i])
                this->inventory[i] = cpy.inventory[i]->clone();
            else 
                this->inventory[i] = 0;
            delete cpy.inventory[i];
        }
    }
    if(nbr_trash){
        for(int i = 0; i < 8; i++){
            if(cpy.floor[i])
                this->floor[i] = cpy.floor[i]->clone();
            else 
                this->floor[i] = 0;
        }
    }
}

Character const & Character::operator=(Character const & cpy){

    if(this != &cpy){
        this->name = cpy.name;
        this->nbr_invent = cpy.nbr_invent;
        if(nbr_invent){
            for(int i = 0; i < 4; i++){
                if(this->inventory[i])
                    delete this->inventory[i];
                if(cpy.inventory[i])
                   this->inventory[i] = cpy.inventory[i]->clone();
                else 
                    this->inventory[i] = 0;
            }
        }
        if(nbr_trash){
            for(int i = 0; i < 8; i++){
                if(cpy.floor[i])
                    this->floor[i] = cpy.floor[i]->clone();
                else 
                    this->floor[i] = 0;
            }
        }
    }
    return(*this);
}


Character::~Character(){
    for(int i = 0; i < nbr_trash; i++){
        if(floor[i])
            delete floor[i];
    }
    for(int i = 0; i < 4; i++){
        if(inventory[i])
            delete inventory[i];
    }
}

std::string const & Character::getName(void) const{return(name);}

void    Character::equip(AMateria* m){
    if(m->getTake()){
        std::cout << m->getType() << " already used by other" << std::endl;
        return ;
    }
    if(nbr_invent < 3){
        for(int i = 0; i < 4; i++){
            if(inventory[i] == 0){
                inventory[i] = m;
                std::cout << inventory[i]->getType() << " add to inventory" << std::endl;
                break;
            } 
        }
        m->setTake();
        nbr_invent++;
        return;
    }
}

void    Character::unequip(int idx){
    if((idx < 0 || idx > 3) || nbr_invent == 0){
        return ;
    }
    if(nbr_trash == 7){
        std::cout << "the ground is full! you cannot unequip" << std::endl;
        return ;
    }
    floor[nbr_trash] = inventory[idx];
    std::cout << floor[nbr_trash]->getType() << " was throw" << std::endl;
    inventory[idx] = 0;
    nbr_trash++;
    nbr_invent--;
}

void    Character::use(int idx, ICharacter& target){
    if((idx < 0 || idx > 3) || nbr_invent == 0){
        return ;
    }
    if (inventory[idx])
    {
        inventory[idx]->use(target);
        delete inventory[idx];
        inventory[idx] = 0;
    }
    nbr_invent--;
}

