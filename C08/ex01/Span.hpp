/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 08:57:30 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/08 13:40:03 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <algorithm>
#include <iostream>

using	std::cout;
using	std::endl;

class Span
{
	private:
		std::vector <int>	array;
		int					iterator;
		int					max;
	public:
		void	addNumber(int value);
		void	addNumbers(int value, int amount);

		int		shortestSpan();
		int		longestSpan();
		
		int		getIterator() const;
		int		getNumber(int index) const;
		std::vector <int>	getArray() const;
		Span(unsigned int N);
		~Span();
		Span(const Span &cpy);

		class ArrayIsFull : public std::exception {
			virtual const char* what( void ) const throw(){ return "Array is full!";}	
		};
		class	OutOfBounds : public std::exception {
			virtual const char* what( void ) const throw(){ return "Index out of bounds";}
		};
};

std::ostream &operator<<(std::ostream &o, Span const &array);
