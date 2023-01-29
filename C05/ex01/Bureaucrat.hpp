/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:45:06 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/29 12:53:23 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Form;

class Bureaucrat
{
	private:
		const std::string	name;
		int					level;
	public:
		Bureaucrat(const std::string name, int level);
		~Bureaucrat();
		std::string		getName() const;
		int	getGrade() const;
		void	incrementGrade();
		void	decrementGrade();
		void	signForm(Form &contract);

	/* Exception classes */

		class GradeTooLowException : public std::exception {
			public:
				std::string whaat() {
					return "Grade too low";
				}
		};
		class GradeTooHighException : public std::exception {
			public:
				std::string whaat() {
					return "Grade too high";
				}
		};
};

std::ostream &operator<<(std::ostream &arg, const Bureaucrat &pelo);

#endif
