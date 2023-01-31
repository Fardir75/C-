/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:19:07 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/31 14:34:49 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

int main ()
{
	
	Bureaucrat				john("John", 1);
	Bureaucrat				gontrant("Gontrant", 150);
	ShrubberyCreationForm	shrub("cozy");
	RobotomyRequestForm		robot("Mike");
	PresidentialPardonForm	pres("Jerry Smith");
	RobotomyRequestForm		ai("Musk");

	std::cout << std::endl << "	[ All forms have been created ]" << std::endl << std::endl;

	john.executeForm(shrub);
	john.signForm(shrub);
	john.executeForm(shrub);
	john.signForm(robot);
	john.executeForm(robot);
	john.signForm(pres);
	john.executeForm(pres);

	std::cout << std::endl;

	gontrant.executeForm(ai);
	gontrant.signForm(shrub);
	gontrant.executeForm(shrub);
	gontrant.signForm(robot);
	gontrant.executeForm(robot);
	gontrant.signForm(pres);
	gontrant.executeForm(pres);
	
	std::cout << std::endl << "	[ All forms have been dealt with ]" << std::endl << std::endl;
	
	return (0);
}
