/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:27:48 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/14 16:56:35 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::~HumanB()
{}

void	HumanB::attack()
{
	if (!weapon)
	{
		std::cout << name << " is unarmed" << std::endl;
		return ;
	}
	std::cout << name << ": attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &WeaponType)
{
	this->weapon = &WeaponType;
}
