/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 08:56:37 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/09 13:46:39 by eavilov          ###   ########.fr       */
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
	try {cout << array.longestSpan() << endl;}
	catch (std::exception &e) {cout << e.what() << endl;}
	try {cout << array.shortestSpan() << endl;}
	catch (std::exception &e) {cout << e.what() << endl;}
	Span	array2(10000);
	array2.addNumbers(10000);
	try {cout << array2.shortestSpan() << endl;}
	catch (std::exception &e) {cout << e.what() << endl;}
	try {cout << array2.longestSpan() << endl;}
	catch (std::exception &e) {cout << e.what() << endl;}

	/*	subject test  */
	cout << endl << "[	garbage tests	]" << endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}