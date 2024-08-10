/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdeviann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 08:24:36 by qdeviann          #+#    #+#             */
/*   Updated: 2024/08/10 08:24:39 by qdeviann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){name = "";}
Zombie::~Zombie(){ std::cout << name << " was destroyed" << std::endl;}

std::string Zombie::get_name(void) const{return (name);}
void        Zombie::set_name(std::string name){this->name = name;}

void    Zombie::announce(void){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
