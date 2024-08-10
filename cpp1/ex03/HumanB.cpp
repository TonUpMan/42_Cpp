/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdeviann <qdeviann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 08:28:10 by qdeviann          #+#    #+#             */
/*   Updated: 2024/08/10 16:23:00 by qdeviann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    this->name = name;
    ptr = NULL;
}
HumanB::~HumanB(){}

void        HumanB::setWeapon(Weapon& weapon){ptr = &weapon;}
std::string HumanB::getWeapon(void) const{return (ptr->getType());}

void    HumanB::attack(void){
  
    if(!ptr || ptr->getType().empty()){
        std::cout << name << " attacks with their " << "hand" << std::endl;
        return ;
    }
    std::cout << name << " attacks with their " << ptr->getType() << std::endl;
}