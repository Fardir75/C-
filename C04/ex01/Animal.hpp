/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:10:59 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/02 15:38:35 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "WrongCat.hpp"

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal &cpy);
        Animal  &operator=(const Animal &replacement);
        virtual void        makeSound() const;
        virtual void        printIdeas() const;
        std::string getType() const;
};

#endif
