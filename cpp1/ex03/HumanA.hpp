/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdeviann <qdeviann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 08:28:01 by qdeviann          #+#    #+#             */
/*   Updated: 2024/08/10 08:28:07 by qdeviann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{

    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();
        void    attack(void);
        std::string getWeapon(void) const;
    
    private:
        std::string     name;
        Weapon&         ref;
};

#endif