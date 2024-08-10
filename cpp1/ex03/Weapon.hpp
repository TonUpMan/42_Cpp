/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdeviann <qdeviann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 08:28:42 by qdeviann          #+#    #+#             */
/*   Updated: 2024/08/10 08:28:44 by qdeviann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon{

    public:
        Weapon(std::string type);
        ~Weapon();
        std::string     getType(void) const;
        void            setType(std::string type);

    private:
        std::string type;

};

#endif