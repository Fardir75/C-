/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:45:31 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/28 15:54:06 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, unsigned int level) : name(name)
{
	std::cout << "Bureaucrat named [ " << this->name + " ]" << " has been hired" << std::endl;
	if (level < 1)
		throw Bureaucrat::GradeTooHighException();
	if (level > 150)
		throw Bureaucrat::GradeTooLowException();
	this->level = level;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << this->name << " has been fired" << std::endl;
}

std::string	Bureaucrat::getName() const
{
	return this->name;
}

unsigned int	Bureaucrat::getGrade() const
{
	return this->level;
}

std::ostream &operator<<(std::ostream &arg, const Bureaucrat &pelo)
{
	arg << pelo.getName() << ", Grade [" << pelo.getGrade() << "]";
	return arg;
}

void	Bureaucrat::incrementGrade()
{
	if ((this->level - 1) < 1)
		throw Bureaucrat::GradeTooHighException();
	this->level--;
}

void	Bureaucrat::decrementGrade()
{
	if ((this->level + 1) > 150)
		throw Bureaucrat::GradeTooLowException();
	this->level++;
}