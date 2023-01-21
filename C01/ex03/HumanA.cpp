/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:27:34 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/14 16:56:27 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{}

HumanA::~HumanA()
{}

void	HumanA::attack()
{
	std::cout << name << ": attacks with their " << weapon.getType() << std::endl;
}
