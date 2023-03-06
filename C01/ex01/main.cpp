/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:10:17 by eavilov           #+#    #+#             */
/*   Updated: 2023/02/21 19:17:02 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	*MyHorde;

	MyHorde = zombieHorde(5, "Adam"); // 5 zombies are escaping, therefore the constructor is called 5 times
	std::cout << std::endl;
	MyHorde->announce(); // This one should make the first zombie speak
	MyHorde[3].announce(); // Making the 4th zombie speak, this one does
	MyHorde[8].announce(); // Making the 9th Zombie speak, this one doesn't exist
	MyHorde[-42].announce(); // this one clearly doesn't exist
	std::cout << std::endl;
	delete [] MyHorde; // Do NOT simply use "delete" as before, it's a defined array this time
}
