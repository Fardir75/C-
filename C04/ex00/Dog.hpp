/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:11:53 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/01 08:56:51 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Cat.hpp"

class Dog : public Animal
{
    private:
    public:
        Dog(const Dog &cpy);
        Dog &operator=(const Dog &ass);
        Dog();
        ~Dog();
        
        void    makeSound() const;
};

#endif
