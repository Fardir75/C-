/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:19:07 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/03 15:48:44 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

int main()
{
    const Animal    *j = new Dog();
    const Animal    *i = new Cat();
    const Animal    *tab[4];

    srand(time(0));
    for (int index = 0; index < 2; index++)
        tab[index] = new Cat();
    for (int index = 0; index < 2; index++)
        tab[index + 2] = new Dog();
    tab[1]->makeSound();
    tab[3]->makeSound();

    Cat *newCat = new Cat();
    std::cout << std::endl << "newCat: ";
    newCat->printIdeas();
    Cat *copy = new Cat(*newCat);
    
    std::cout << std::endl << "  -- After deep copy --" << std::endl;
    copy->printIdeas();
    std::cout << std::endl;
    delete copy;
    delete newCat;
    std::cout << std::endl;

    
    std::cout << "  [ Everything has been created ]" << std::endl << std::endl;

    for (int index = 0; index < 4; index++)
        delete tab[index];

    std::cout << "  [ Tab has been Freed ]" << std::endl;

    delete j;
    delete i;

    
    //  Will not work because "Animal" is abstract
    /*
    const   Animal  dog;
    const   Animal  cat;
    */
    
    return 0;
}
