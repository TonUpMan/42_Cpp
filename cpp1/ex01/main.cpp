/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdeviann <qdeviann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 08:24:21 by qdeviann          #+#    #+#             */
/*   Updated: 2024/08/10 13:56:20 by qdeviann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){

    Zombie *bob;
    int     N;

    N = 10;
    bob = zombieHorde(N, "bob");
    if(!bob)
        return(0);
    for(int i = 0; i < N; i++){
        bob[i].announce();
    }    
    delete[] bob;
    return (0);
}
