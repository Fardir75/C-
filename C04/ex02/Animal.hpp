/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:10:59 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/01 09:13:24 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define AMINAL_HPP

#include <iostream>
#include "WrongCat.hpp"

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &cpy);
        virtual ~Animal() = 0;
        Animal  &operator=(const Animal &replacement);
        virtual void        makeSound() const;
        std::string getType() const;
};

#endif
