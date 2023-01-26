/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:23:33 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/26 12:52:21 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hit_points(10), energy_points(10), attack_damage(0)
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
    std::cout << "HP: " << this->hit_points << std::endl;;
    std::cout << "MANA: " << this-> energy_points << std::endl;
    std::cout << "AD: " << this-> attack_damage << std::endl;
}

ClapTrap   &ClapTrap::operator=(const ClapTrap& rhs) {
    this->name = rhs.name;
    this->hit_points = rhs.hit_points;
    this->energy_points = rhs.energy_points;
    this->attack_damage = rhs.attack_damage;
    return *this;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit_points == 0)
        std::cout << this->name << " is already dead..." << std::endl;
    else
    {
        if (amount > this->hit_points)
            this->hit_points = 0;
        else
            this->hit_points -= amount;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy_points == 0)
        std::cout << this->name << " is too tired to repair himself." << std::endl;
    else
    {
        this->hit_points += amount;
        this->energy_points -= 1;
    }
}

void    ClapTrap::attack(const std::string &target)
{
    if (this->energy_points == 0)
        std::cout << this->name << " is too tired to attack " << target << "..." << std::endl;
    else if (this->hit_points == 0)
        std::cout << this->name << " is dead so cannot attack " << target << "..." << std::endl;
    else
    {
        std::cout << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points -= 1;
    }
}