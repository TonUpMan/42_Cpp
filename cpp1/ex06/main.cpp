/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdeviann <qdeviann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 08:29:41 by qdeviann          #+#    #+#             */
/*   Updated: 2024/08/10 08:29:43 by qdeviann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av){
    
    Harl        harl;

    if(ac == 2)
        harl.complain(av[1]);
    else
        std::cout << "you didn't listen to me, only one argument" << std::endl;

    return (0);
}