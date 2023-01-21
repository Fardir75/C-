/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:37:19 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/13 18:37:21 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	int	i = -1;
	Zombie *MyHorde = new Zombie[N];
	while (++i < N)
		MyHorde[i].SetName(name);
	return (MyHorde);
}
