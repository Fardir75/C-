/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:21:02 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/14 17:02:56 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon 
{
	private:
		std::string WeaponType;
	public:
		const std::string	&getType() const;
		void		setType(std::string WeaponType);
	Weapon(std::string WeaponType);
	~Weapon();
};

#endif
