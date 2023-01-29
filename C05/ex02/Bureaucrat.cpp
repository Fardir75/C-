/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:45:31 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/29 14:47:35 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Bureaucrat::Bureaucrat(const std::string name, int level) : name(name), level(level)
{
	std::cout << "Bureaucrat named [ " << this->name + " ]" << " has been hired" << std::endl;
	if (level < 1)
		throw Bureaucrat::GradeTooHighException();
	if (level > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
	std::cout << this->name << " has been fired" << std::endl;
}

std::string	Bureaucrat::getName() const
{
	return this->name;
}

int	Bureaucrat::getGrade() const
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

void	Bureaucrat::signForm(Form &contract)
{
	try
	{
		contract.beSigned(*this);
		std::cout << this->name << " signed the form [ " << contract.getName() << " ]" << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cout << this->name << " couldn't sign " << contract.getName() << " because [";
		std::cout << e.whaat() << "]" << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << this->name << " couldn't sign " << contract.getName() << " because [";
		std::cout << e.whaat() << "]" << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
		std::cout << this->name << " executed the form [ " << form.getName() << " ]" << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cout << this->name << " couldn't execute " << form.getName() << " because [";
		std::cout << e.whaat() << "]" << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << this->name << " couldn't execute " << form.getName() << " because [";
		std::cout << e.whaat() << "]" << std::endl;
	}
	catch(Bureaucrat::FormNotSignedException &e)
	{
		std::cout << this->name << " couldn't execute " << form.getName() << " because [";
		std::cout << e.whaat() << "]" << std::endl;
	}
}
