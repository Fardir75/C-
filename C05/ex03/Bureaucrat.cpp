/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:45:31 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/05 18:56:03 by eavilov          ###   ########.fr       */
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
		if (form.getName() == "Robotomy Request")
		{
			switch (rand() % 2)
			{
				case 0:
				{ 
					std::cout << form.getTarget() << " has been robotomised" << std::endl;
					break ;
				}
				case 1:
				{
					std::cout << form.getTarget() << " failed to get robotomised" << std::endl;
					break ;
				}
			}
		}
		if (form.getName() == "Presidential Pardon")
			std::cout << form.getTarget() << " has been pardoned by the President Zaphod Beeblobrox" << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cout << this->name << " couldn't execute " << form.getName() << " because [";
		std::cout << e.whaat() << "]" << std::endl;
		if (form.getName() == "Robotomy Request")
			std::cout << "The operation to robotomise " << form.getTarget() << " failed" << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << this->name << " couldn't execute " << form.getName() << " because [";
		std::cout << e.whaat() << "]" << std::endl;
		if (form.getName() == "Robotomy Request")
			std::cout << "The operation to robotomise " << form.getTarget() << " failed" << std::endl;
	}
	catch(Bureaucrat::FormNotSignedException &e)
	{
		std::cout << this->name << " couldn't execute " << form.getName() << " because [";
		std::cout << e.whaat() << "]" << std::endl;
		if (form.getName() == "Robotomy Request")
			std::cout << "The operation to robotomise " << form.getTarget() << " failed" << std::endl;
	}
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &cpy)
{
	if (this == &cpy)
		return *this;
	std::string* tmp((std::string*)&(name));
	*tmp = cpy.name;
	this->level = cpy.level;
	return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) : name(cpy.name)
{
	*this = cpy;
}
