/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:45:06 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/28 15:56:07 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		const std::string	name;
		unsigned int		level;
	public:
		Bureaucrat(const std::string name, unsigned int level);
		~Bureaucrat();
		std::string		getName() const;
		unsigned int	getGrade() const;
		void	incrementGrade();
		void	decrementGrade();

	/* Exception classes */
		class GradeTooLowException : public std::exception {
			public:
				std::string what() {
					return "Grade too low";
				}
		};
		class GradeTooHighException : public std::exception {
			public:
				std::string what() {
					return "Grade too high";
				}
		};
};

std::ostream &operator<<(std::ostream &arg, const Bureaucrat &pelo);

#endif
