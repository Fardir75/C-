/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:20:27 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/14 16:46:30 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB 
{
	private:
		std::string name;
		Weapon	*weapon;
	public:
		void	attack();
		void	setWeapon(Weapon &WeaponType);
		HumanB(std::string name);
		~HumanB();
};

#endif
