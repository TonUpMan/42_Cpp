/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdeviann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 08:25:15 by qdeviann          #+#    #+#             */
/*   Updated: 2024/08/10 08:25:18 by qdeviann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class   Zombie{

    public:
        Zombie(void);
        ~Zombie(void);
        void        announce(void);
        std::string get_name(void) const;
        void        set_name(std::string name);

    private:
        std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
