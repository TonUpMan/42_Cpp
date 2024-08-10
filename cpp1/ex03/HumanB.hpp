/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdeviann <qdeviann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 08:28:16 by qdeviann          #+#    #+#             */
/*   Updated: 2024/08/10 08:28:25 by qdeviann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{

    public:
        HumanB(std::string name);
        ~HumanB();
        void    attack(void);
        std::string getWeapon(void) const;
        void        setWeapon(Weapon& weapon);
    
    private:
        std::string     name;
        Weapon*         ptr;
};

#endif