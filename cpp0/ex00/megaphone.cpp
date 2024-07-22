/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdeviann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 13:41:00 by qdeviann          #+#    #+#             */
/*   Updated: 2024/06/25 13:41:05 by qdeviann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
	std::string	str = "";

    if(ac > 1)
    {
        for(int i = 1; i < ac; i++) 
        {
			str = av[i];
            for(int j = 0; j < (int)str.length(); j++)
                std::cout << (char)toupper(str[j]);
        }
        std::cout << std::endl;
    }
	else  
	{
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    } 
}
