/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 12:15:28 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/29 14:39:51 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	protected:
		const std::string	name;
		bool		is_signed;
		int const	grade_to_sign;
		int	const	grade_to_exec;
	public:
		Form(const std::string name, int const grade_to_sign, int const grade_to_exec);
		virtual ~Form() = 0;
		void	beSigned(Bureaucrat	&pelo);
		void	getStatus() const;
		std::string	getName() const;
		void	execute(Bureaucrat const &executor) const;
		
	/* Exception classes */

		class GradeTooLowException : public Bureaucrat::GradeTooLowException {};
		class GradeTooHighException : public Bureaucrat::GradeTooHighException {};
		class FormNotSignedException : public Bureaucrat::FormNotSignedException {};
};

std::ostream &operator<<(std::ostream &arg, const Form &form);

#endif
