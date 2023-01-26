/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:22:45 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/26 12:52:22 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    protected:
        std::string     name;
        unsigned int    hit_points;
        unsigned int    energy_points;
        unsigned int    attack_damage;

        ClapTrap();
    public:
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap &operator=(const ClapTrap &rhs);
        void    attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    displayStats();
};

#endif