/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:11:25 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/01 08:56:46 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    private:
    public:
        Cat(const Cat &cpy);
        Cat &operator=(const Cat &ass);
        Cat();
        ~Cat();
        void    makeSound() const;
};

#endif
