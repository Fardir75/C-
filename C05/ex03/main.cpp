/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:19:07 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/06 19:33:58 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main ()
{
	Bureaucrat	Didier("Didier", 1);
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	Form* faux;
	faux = someRandomIntern.makeForm("asjdasjdnasld", "Also Bender");
	// Error message
	faux = someRandomIntern.makeForm("shrubbery creation", "truc");

	std::cout << *rrf << std::endl;
	Didier.signForm(*rrf);
	std::cout << *faux << std::endl;
	Didier.signForm(*faux);

	delete rrf;
	delete faux;
}
