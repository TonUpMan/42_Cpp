/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdeviann <qdeviann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 08:24:57 by qdeviann          #+#    #+#             */
/*   Updated: 2024/08/10 13:54:09 by qdeviann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){

    Zombie *result;

    if (N <= 0)
        return (0);
    if(name.empty())
        name ="Horde";
    result = new(std::nothrow) Zombie[N];
    if(!result)
    {
        std::cout << "error: bad alloc" << std::endl;
        return(0);
    }
    for(int i = 0; i < N; i++){
        result[i].set_name(name);
    }
    return (result);
}
