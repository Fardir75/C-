/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 12:15:15 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/06 19:25:46 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, int const gradeToSign, int const gradeToExec) : name(name), gradeToSign(gradeToSign), gradeToExec(gradeToExec)
{
	std::cout << "Form created" << std::endl;
	if (gradeToExec < 1 || gradeToSign < 1)
		throw Form::GradeTooHighException();
	if (gradeToExec > 150 || gradeToSign > 150)
		throw Form::GradeTooLowException();
	this->isSigned = 0;
}

Form::~Form()
{
	std::cout << "Form [ " << this->name << " ] destroyed" << std::endl;
}

void	Form::beSigned(Bureaucrat &pelo)
{
	if (pelo.getGrade() > this->gradeToSign)
		throw Form::GradeTooLowException();
	this->isSigned = 1;
}

void	Form::getStatus() const
{
	std::cout << "[ Form Status ]" << std::endl;
	std::cout << "Name: " << this->name << std::endl;
	std::cout << "Signed: ";
	if (this->isSigned == 0)
		std::cout << "No" << std::endl;
	else
		std::cout << "Yes" << std::endl;
	std::cout << "Grade required to sign: " << this->gradeToSign << std::endl;
	std::cout << "Grade required to execute: " << this->gradeToExec << std::endl;
}

std::string	Form::getName() const
{
	return this->name;
}

bool	Form::isItSigned() const
{
	return	isSigned;
}

std::ostream &operator<<(std::ostream &arg, const Form &form)
{
	arg << form.getName() << ", ";
	if (form.isItSigned())
		arg << "is signed, " << "level to sign: " << form.getGradeToSign() << " level to exec: " << form.getGradeToExec();
	else
		arg << "is not signed, " << "level to sign: " << form.getGradeToSign() << " level to exec: " << form.getGradeToExec();
	return arg;
}

void	Form::execute(Bureaucrat const &executor) const
{
	if (this->isSigned == 0)
		throw Form::FormNotSignedException();
	else if (executor.getGrade() > this->gradeToSign)
		throw Form::GradeTooLowException();
	else if (executor.getGrade() < 1)
		throw Form::GradeTooHighException();
}

void	Form::setTarget(const std::string &target)
{
	this->target = target;
}

std::string	Form::getTarget() const
{
	return this->target;
}

int		Form::getGradeToSign() const
{
	return gradeToSign;
}

int		Form::getGradeToExec() const
{
	return	gradeToExec;
}

Form	&Form::operator=(const Form &cpy)
{
	if (this == &cpy)
		return *this;
	std::string* tmp((std::string*)&(name));
	*tmp = cpy.name;
	this->isSigned = cpy.isSigned;
	return *this;
}

Form::Form(const Form &cpy) : isSigned(cpy.isSigned), gradeToSign(cpy.gradeToSign), gradeToExec(cpy.gradeToExec)
{
	*this = cpy;
}
