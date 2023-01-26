/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:56:18 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/26 12:50:25 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    std::cout << "A ScavTrap" << " has been created!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "The ScavTrap" << " has been destroyed" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << this->name << " has entered GATE KEEPER mode" << std::endl;
}

void    ScavTrap::attack(const std::string &target)
{
    std::cout << "The ScavTrap called " << this->name << " attacks " << target << " for " << this->attack_damage << " points of damage!" << std::endl;
}