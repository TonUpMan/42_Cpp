/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdeviann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 08:23:03 by qdeviann          #+#    #+#             */
/*   Updated: 2024/08/10 08:23:07 by qdeviann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name){

    Zombie *result;

    result = new Zombie();
    if(name.empty())
        name = "New";
    result->set_name(name);
    return (result);
}
