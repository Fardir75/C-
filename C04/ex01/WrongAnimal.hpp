/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:44:53 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/01 09:06:59 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal(const WrongAnimal &cpy);
        WrongAnimal &operator=(const WrongAnimal &ass);
        WrongAnimal();
        virtual ~WrongAnimal();
        virtual void    makeSound() const;
        std::string     getType() const;
};

#endif
