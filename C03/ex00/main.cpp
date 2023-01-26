/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:19:07 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/26 11:54:30 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap    hero("ClapTrap");
    std::string enemy("Handsome Jack");

    hero.attack(enemy);  
    hero.displayStats();
    hero.takeDamage(42);
//  for (int i = 9; i > 0; i--)
//      hero.attack(enemy);
    hero.displayStats();
    hero.attack(enemy);
}
