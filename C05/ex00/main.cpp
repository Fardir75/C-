/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:19:07 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/03 16:26:34 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat	bob("Bob", 130);
		bob.incrementGrade();
		std::cout << bob << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.whaat() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.whaat() << std::endl;
	}
	try
	{
		Bureaucrat	michel("Michel", 1);
		std::cout << michel << std::endl;
		michel.incrementGrade(); // comment either this or the next one
		Bureaucrat	isabelle("Isabelle", 150);
		std::cout << isabelle << std::endl;
		isabelle.decrementGrade();
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.whaat() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.whaat() << std::endl;
	}

	Bureaucrat	jean("Jean", 1);
	Bureaucrat	jean2(jean);
	Bureaucrat	yves("Yves", 42);
	yves = jean2;
	std::cout << jean2 << std::endl;
	std::cout << yves << std::endl;
}
