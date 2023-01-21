/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:36:02 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/14 16:59:36 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <typeinfo>

Weapon::Weapon(std::string WeaponType)
{
	this->WeaponType = WeaponType;
}

void	Weapon::setType(std::string WeaponType)
{
	this->WeaponType = WeaponType;
}

int main()
{
	std::cout << typeid(Weapon).name() << std::endl;
}
