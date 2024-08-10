/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdeviann <qdeviann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 08:27:55 by qdeviann          #+#    #+#             */
/*   Updated: 2024/08/10 08:27:57 by qdeviann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type) : name(name), ref(type) {}
HumanA::~HumanA(){}

std::string HumanA::getWeapon(void) const{return(ref.getType());}

void    HumanA::attack(void){
   
    if(ref.getType().empty()){
        std::cout << name << " attacks with their " << "hand" << std::endl;
        return ;
    }
    std::cout << name << " attacks with their " << ref.getType() << std::endl;
}
