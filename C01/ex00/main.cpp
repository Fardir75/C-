/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:02:18 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/13 18:08:29 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	Charles("Charles");
	Zombie	*Henry;

	Henry = newZombie("Henry"); // manual allocation
	delete Henry; // free

	randomChump("Bouffon");
}
