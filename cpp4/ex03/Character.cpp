#include "Character.hpp"

Character::Character(std::string & name) : name(name), nbr_invent(0), nbr_trash(0){}

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

Character::~Character(){}

std::string const & Character::getName(void) const{return(name);}

void Character::equip(AMateria* m){
    if(nbr_invent < 3){
        inventory[nbr_invent] = m;
        nbr_invent++;
        std::cout << m->getType() << " add to inventory" << std::endl;
    }
}

void Character::unequip(int idx){
    if(idx < 0 && idx > 3){
        return ;
    }
    if(nbr_trash == 7){
        std::cout << "there are already so much Materia on the floor!" << std::endl;
        return ;
    }
    
}

void Character::use(int idx, ICharacter& target){

}