/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 09:00:44 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/09 14:05:27 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : iterator(0), max(0) {}

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

void	Span::addNumbers(int amount)
{
	for (int i = 0; i < amount; i++)
		addNumber(i*i);
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
	if (iterator < 2)
		throw NotEnoughValues();
	std::vector<int> sortedNums(array);
    std::sort(sortedNums.begin(), sortedNums.end());
    int smallestDifference = INT_MAX;
	int	difference		   = 0;
    for (std::vector<int>::iterator it = sortedNums.begin(); it != sortedNums.end() - 1; it++)
	{
        difference = *(it + 1) - *it;
        if (difference < smallestDifference)
		{
            smallestDifference = difference;
		}
    }
    return smallestDifference;
}

int		Span::longestSpan()
{
	if (iterator < 2)
		throw NotEnoughValues();
	return (abs(*std::max_element(array.begin(), array.end())) - abs(*std::min_element(array.begin(), array.end())));
}
