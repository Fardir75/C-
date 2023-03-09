/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 08:56:37 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/08 13:49:19 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span	array(5);

	array.addNumber(5);
	array.addNumber(42);
	array.addNumber(9);
	array.addNumber(95);
	array.addNumber(4845122);
	array.addNumber(-505);
	cout << array << endl;
	cout << array.longestSpan() << endl;
	array.shortestSpan();
}