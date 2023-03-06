/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:23:33 by eavilov           #+#    #+#             */
/*   Updated: 2023/02/22 17:56:13 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << this->name << " has been created!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << this->name << " has been destroyed..." << std::endl;
}

void    ClapTrap::displayStats()
{
    std::cout << "NAME: " << this->name << std::endl;
    std::cout << "HP: " << this->hitPoints << std::endl;;
    std::cout << "MANA: " << this-> energyPoints << std::endl;
    std::cout << "AD: " << this-> attackDamage << std::endl;
}

ClapTrap   &ClapTrap::operator=(const ClapTrap& rhs) {
    this->name = rhs.name;
    this->hitPoints = rhs.hitPoints;
    this->energyPoints = rhs.energyPoints;
    this->attackDamage = rhs.attackDamage;
    return *this;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints == 0)
        std::cout << this->name << " is already dead..." << std::endl;
    else
    {
        if (amount > this->hitPoints)
            this->hitPoints = 0;
        else
            this->hitPoints -= amount;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints == 0)
        std::cout << this->name << " is too tired to repair himself." << std::endl;
    else
    {
        this->hitPoints += amount;
        this->energyPoints -= 1;
    }
}

void    ClapTrap::attack(const std::string &target)
{
    if (this->energyPoints == 0)
        std::cout << this->name << " is too tired to attack " << target << "..." << std::endl;
    else if (this->hitPoints == 0)
        std::cout << this->name << " is dead so cannot attack " << target << "..." << std::endl;
    else
    {
        std::cout << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints -= 1;
    }
}