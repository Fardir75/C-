/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:11:25 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/02 15:25:08 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *ideas;
    public:
        Cat(const Cat &cpy);
        Cat &operator=(const Cat &ass);
        Cat();
        ~Cat();
        void    makeSound() const;
        void    printIdeas() const;
};

#endif
