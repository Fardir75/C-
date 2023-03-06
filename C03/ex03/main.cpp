/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:19:07 by eavilov           #+#    #+#             */
/*   Updated: 2023/02/14 19:52:21 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap ash("Ash");
    DiamondTrap ash2(ash);
    DiamondTrap ash3(".");

    std::cout << std::endl << " [ All Diamond Traps have been created ]" << std::endl << std::endl;

    ash.whoAmI();
    ash2.whoAmI();
    ash3 = ash;
    ash3.whoAmI();

    std::cout << std::endl << " [ All Diamond Traps have introduced themselves ]" << std::endl << std::endl;

    ash.attack("the air");
    ash.takeDamage( 10 );
    ash.beRepaired( 10 );
}
