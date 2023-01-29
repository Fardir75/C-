/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:19:07 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/29 12:56:14 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main ()
{
	try
	{
		Form	f24b("24B", 24, 0);
		std::cout << f24b << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << "Exception : " << e.whaat() << std::endl;
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << "Exception : " << e.whaat() << std::endl;
	}
	Form		f24b("24B", 24, 1);
	Bureaucrat	john("John", 10);
	Bureaucrat	mike("Mike", 50);

	std::cout << f24b << std::endl;
	mike.signForm(f24b);
	std::cout << f24b << std::endl;
	john.signForm(f24b);
	std::cout << f24b << std::endl;
	return (0);
}
