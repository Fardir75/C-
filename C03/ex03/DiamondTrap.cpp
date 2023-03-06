/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:48:21 by eavilov           #+#    #+#             */
/*   Updated: 2023/02/22 17:53:40 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
    this->ClapTrap::name = name + "_clap_name";
    this->name = name;
    FragTrap::hitPoints = 100;
    FragTrap::energyPoints = 50;
    FragTrap::attackDamage = 30;
    std::cout << "A DiamondTrap has been created!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "The Diamond Trap has been destroyed" << std::endl;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "I am " << this->name << " from " << ClapTrap::name << '.' << std::endl;
}