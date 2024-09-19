/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdeviann <qdeviann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 08:23:58 by qdeviann          #+#    #+#             */
/*   Updated: 2024/09/19 11:54:13 by qdeviann         ###   ########.fr       */
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

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
