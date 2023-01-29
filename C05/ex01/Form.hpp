/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 12:15:28 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/29 12:56:34 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	name;
		bool		is_signed;
		int const	grade_to_sign;
		int	const	grade_to_exec;
	public:
		void	beSigned(Bureaucrat	&pelo);
		void	getStatus() const;
		std::string	getName() const;
		Form(const std::string name, int const grade_to_sign, int const grade_to_exec);
		~Form();
		
	/* Exception classes */

		class GradeTooLowException : public Bureaucrat::GradeTooLowException {};
		class GradeTooHighException : public Bureaucrat::GradeTooHighException {};
};

std::ostream &operator<<(std::ostream &arg, const Form &form);

#endif
