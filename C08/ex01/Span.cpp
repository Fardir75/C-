/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 09:00:44 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/08 13:49:33 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : iterator(0), max(N) {}

Span::~Span(){}

int	Span::getIterator() const
{
	return iterator;
}

std::vector <int> Span::getArray() const
{
	return array;
}

void	Span::addNumber(int value)
{
	try 
	{
		if (this->iterator >= this->max)
			throw ArrayIsFull();
		array.push_back(value);
		this->iterator++;
	}
	catch (std::exception &e) {cout << e.what() << endl;}
}

void	Span::addNumbers(int value, int amount)
{
	for (int i = 0; i < amount; i++)
		addNumber(value);
}

Span::Span(const Span &cpy)
{
	*this = cpy;
}

int	Span::getNumber(int index) const
{
	if (index >= this->iterator)
		throw Span::OutOfBounds();
	return this->array[index];
}

std::ostream	&operator<<(std::ostream &o, Span const &array)
{
	for (int i = 0; i < array.getIterator();i++)
	{
		try {o << array.getNumber(i) << ' ';}
		catch (std::exception &e) {}
	}
	return o;
}

int		Span::shortestSpan()
{
	std::vector <int> copy(array);
	std::sort(copy.begin(), copy.end());
	for (size_t i = 0; i < copy.size(); i++)
		std::cout << copy[i] << ' ';
	cout << endl;
	return 0;
}

int		Span::longestSpan()
{
	return (abs(*std::max_element(array.begin(), array.end())) - abs(*std::min_element(array.begin(), array.end())));
}
