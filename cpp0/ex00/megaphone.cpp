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
#include <cctype>
#include <string>

int main(int ac, char **av)
{
    int 		i;
    int 		j;
	std::string	str;

    i = 1;
    if(ac > 1)
    {
        while(av[i])
        {
            j = 0;
			str = av[i];
            while(str[j])
            {
                std::cout << (char)toupper(str[j]);
                j++;
            }
            i++;
        }
        std::cout << std::endl;
    }
	else  
	{
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    } 
}
