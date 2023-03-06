/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 12:32:17 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/02 15:58:44 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <cstdlib>

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain(const Brain &cpy);
		Brain &operator=(const Brain &brain);
		Brain();
		~Brain();
		void	printIdeas() const;
};


#endif
