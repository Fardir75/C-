/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:45:18 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/01 09:06:47 by eavilov          ###   ########.fr       */    
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    private:
    public:
        WrongCat(const WrongCat &cpy);
        WrongCat &operator=(const WrongCat &ass);
        WrongCat();
        ~WrongCat();
        void    makeSound() const;
};

#endif
