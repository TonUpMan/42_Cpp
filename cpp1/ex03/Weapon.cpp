/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdeviann <qdeviann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 08:28:33 by qdeviann          #+#    #+#             */
/*   Updated: 2024/08/10 08:28:37 by qdeviann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon){
    this->type = weapon;
}
Weapon::~Weapon(){}

std::string Weapon::getType(void) const{return (this->type);}
void        Weapon::setType(std::string type){this->type = type;}
