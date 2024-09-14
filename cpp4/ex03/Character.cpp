#include "Character.hpp"

Character::Character(std::string const & name) : name(name){
    std::cout << "Character constructed(name)" << std::endl;
    nbr_invent = 0; 
    nbr_trash = 0;
    for(int i = 0; i < 4; i++)
        inventory[i] = 0;
    for(int i = 0; i < 8; i++)
        floor[i] = 0;
}

Character::Character(Character const & cpy){
    std::cout << "Character constructed(cpy)" << std::endl;
    name = "";
    nbr_invent = 0; 
    nbr_trash = 0;
    for(int i = 0; i < 4; i++)
        inventory[i] = 0;
    for(int i = 0; i < 8; i++)
        floor[i] = 0;
    *this = cpy;
}

Character const & Character::operator=(Character const & cpy){
    std::cout << "Character assigned(operator=)" << std::endl;
    if(this != &cpy){
        this->name = cpy.getName();
        this->nbr_invent = cpy.getInvent();
        this->nbr_trash = cpy.getFloor();
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

Character::~Character(void){
    std::cout << "Character destructed(" << name << ")" << std::endl;
    for(int i = 0; i < 8; i++){
        if(floor[i])
            delete floor[i];
    }
    for(int i = 0; i < 4; i++){
        if(inventory[i])
            delete inventory[i];
    }
}

std::string const & Character::getName(void) const{return(name);}
int Character::getInvent() const{return(nbr_invent);}
int Character::getFloor() const{return(nbr_trash);}

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

