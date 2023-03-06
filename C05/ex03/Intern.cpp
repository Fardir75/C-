/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:58:22 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/06 19:19:37 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::~Intern(){}

Intern::Intern(const Intern &cpy)
{
	*this = cpy;
}

Intern &Intern::operator=(const Intern &cpy)
{
	if (this == &cpy)
		return *this;
	*this = cpy;
	return *this;
}

Form	*Shrubbery(const std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form	*President(const std::string target)
{
	return new PresidentialPardonForm(target);
}

Form	*Robotomy(const std::string target)
{
	return new RobotomyRequestForm(target);
}

Form	*Intern::makeForm(const std::string name, const std::string target)
{
	FunctionPointer	formList[3] = {&Robotomy, &President, &Shrubbery};
	std::string	forms[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	for (int i = 0; i < 3; i++)
		if (!name.compare(forms[i]))
			return (formList[i])(target);
	std::cout << name << " cannot be created by Intern" << std::endl;
	return NULL;
}

