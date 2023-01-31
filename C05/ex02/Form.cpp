/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 12:15:15 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/31 14:29:13 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, int const grade_to_sign, int const grade_to_exec) : name(name), grade_to_sign(grade_to_sign), grade_to_exec(grade_to_exec)
{
	std::cout << "Form created" << std::endl;
	if (grade_to_exec < 1 || grade_to_sign < 1)
		throw Form::GradeTooHighException();
	if (grade_to_exec > 150 || grade_to_sign > 150)
		throw Form::GradeTooLowException();
	this->is_signed = 0;
}

Form::~Form()
{
	std::cout << "Form [ " << this->name << " ] destroyed" << std::endl;
}

void	Form::beSigned(Bureaucrat &pelo)
{
	if (pelo.getGrade() > this->grade_to_sign)
		throw Form::GradeTooLowException();
	this->is_signed = 1;
}

void	Form::getStatus() const
{
	std::cout << "[ Form Status ]" << std::endl;
	std::cout << "Name: " << this->name << std::endl;
	std::cout << "Signed: ";
	if (this->is_signed == 0)
		std::cout << "No" << std::endl;
	else
		std::cout << "Yes" << std::endl;
	std::cout << "Grade required to sign: " << this->grade_to_sign << std::endl;
	std::cout << "Grade required to execute: " << this->grade_to_exec << std::endl;
}

std::string	Form::getName() const
{
	return this->name;
}

std::ostream &operator<<(std::ostream &arg, const Form &form)
{
	arg << form.getName();
	return arg;
}

void	Form::execute(Bureaucrat const &executor) const
{
	if (this->is_signed == 0)
		throw Form::FormNotSignedException();
	else if (executor.getGrade() > this->grade_to_sign)
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
