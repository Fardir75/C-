/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:18:21 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/14 16:29:56 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_HPP
# define HUMANA_HPP

#include "HumanB.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon	&weapon;
		HumanA();
	public:
		void	attack();
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
};

#endif
