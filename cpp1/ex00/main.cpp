/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdeviann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 08:22:43 by qdeviann          #+#    #+#             */
/*   Updated: 2024/08/10 08:22:50 by qdeviann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){

    Zombie *bob;
    
    bob = newZombie("arthur");
    randomChump("brice");
    bob->announce();
    delete(bob);
    return (0);
}
