/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 12:15:28 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/06 19:23:38 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Bureaucrat.hpp"

class Form
{
	protected:
		std::string	target;
		const std::string	name;
		bool				isSigned;
		int const			gradeToSign;
		int	const			gradeToExec;
	public:
		Form(const Form &cpy);
		Form &operator=(const Form &cpy);
		Form(const std::string name, int const grade_to_sign, int const grade_to_exec);
		virtual 	~Form() = 0;
		void		beSigned(Bureaucrat	&pelo);
		void		getStatus() const;
		std::string	getName() const;
		int		getGradeToSign() const;
		int		getGradeToExec() const;
		bool	isItSigned() const;
		void		setTarget(const std::string &target);
		std::string	getTarget() const;
		void		execute(Bureaucrat const &executor) const;
		
	/* Exception classes */

		class GradeTooLowException : public Bureaucrat::GradeTooLowException {};
		class GradeTooHighException : public Bureaucrat::GradeTooHighException {};
		class FormNotSignedException : public Bureaucrat::FormNotSignedException {};
};

std::ostream &operator<<(std::ostream &arg, const Form &form);

#endif
