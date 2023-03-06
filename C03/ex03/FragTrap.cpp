/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:54:14 by eavilov           #+#    #+#             */
/*   Updated: 2023/02/22 17:53:50 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "A FragTrap" << " has been created!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "The FragTrap" << " has been destroyed" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::string action;
    std::cout << std::endl << this->name << ": Give me a High Five!" << std::endl;
    std::getline(std::cin, action);
    if (action == "High Five")
    {
        std::cout << "thanks uwu" << std::endl;
        return ;
    }
    else
        std::cout << "you fucking idiot never learned how to high five?" << std::endl;
}
