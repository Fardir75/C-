/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:19:07 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/28 14:42:58 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

int main()
{
    const Animal    *j = new Dog();
    const Animal    *i = new Cat();
    const Animal    *tab[4];

    for (int index = 0; index < 2; index++)
        tab[index] = new Cat();
    for (int index = 0; index < 2; index++)
        tab[index + 2] = new Dog();
    tab[1]->makeSound();
    tab[3]->makeSound();

    std::cout << "  [ Everything has been created ]" << std::endl;

    for (int index = 0; index < 4; index++)
        delete tab[index];

    std::cout << "  [ Tab has been Freed ]" << std::endl;

    delete j;
    delete i;

    /*
    Will not work
    const   Animal  dog;
    const   Animal  cat;
    */
    
    return 0;
}
