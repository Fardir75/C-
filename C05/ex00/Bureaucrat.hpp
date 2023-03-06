/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:45:06 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/03 16:20:26 by eavilov          ###   ########.fr       */
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
		Bureaucrat(const Bureaucrat &cpy);
		Bureaucrat &operator=(const Bureaucrat &cpy);
		Bureaucrat(const std::string name, unsigned int level);
		~Bureaucrat();
		std::string		getName() const;
		unsigned int	getGrade() const;
		void	incrementGrade();
		void	decrementGrade();

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
