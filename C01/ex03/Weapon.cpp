/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:22:07 by eavilov           #+#    #+#             */
/*   Updated: 2023/02/13 14:50:48 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string WeaponType)
{
	if (WeaponType.empty())
		this->WeaponType = "";
	else
		this->WeaponType = WeaponType;
}

Weapon::~Weapon()
{
	return ;
}

void	Weapon::setType(std::string NewType)
{
	this->WeaponType = NewType;
}

const std::string &Weapon::getType() const
{
	return (this->WeaponType);
}
