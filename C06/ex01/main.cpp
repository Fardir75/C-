/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:19:07 by eavilov           #+#    #+#             */
/*   Updated: 2023/02/07 17:19:06 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main()
{
    uintptr_t   val;
    Data        *ptr = new Data;
    Data2       *ptr3 = new Data2;

    ptr->str1 = "Hello";
    ptr->value = 42;
    val = serialize(ptr);
    std::cout << val << std::endl;
    Data *ptr2 = deserialize(val);
    std::cout << ptr2->str1 << std::endl; // MAIS ATT?
    std::cout << ptr2->value << std::endl; // PUTAIN C'EST STYLE?

    ptr3->str1 = "C'est de la magie noir cette merde?";
    ptr3->str2 = "Ca n'a aucun putain de sens?";
    ptr3->fValue = 42.6231823f;
    ptr3->dValue = 951515164.15;
    val = serialize_two(ptr3);
    std::cout << std::endl << val << std::endl;
    Data2 *ptr4 = deserialize_two(val);
    std::cout << ptr4->str1 << std::endl;
    std::cout << ptr4->str2 << std::endl;
    std::cout << ptr4->fValue << std::endl; // Ok ici le float est arrondi
    std::cout << ptr4->dValue << std::endl; // Et ici le double est raccourci, mais c'est quand meme wtf
    delete ptr3;
    delete ptr;
}
