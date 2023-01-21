/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:46:24 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/16 20:19:49 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.cpp"

int main(int argc, char **argv)
{
	Harl		Customer;
	int			switch_case = 0;

	if (argc == 2)
		switch_case = Customer.complain(argv[1]);
	switch (switch_case)
	{
		case 1:
		{
			std::cout << "DEBUG + INFO + WARNING + ERROR" << std::endl;
			break ;
		}
		case 2:
		{
			std::cout << "INFO + WARNING + ERROR" << std::endl;
			break ;
		}
		case 3:
		{
			std::cout << "WARNING + ERROR" << std::endl;
			break ;
		}
		case 4:
		{
			std::cout << "ERROR" << std::endl;
			break ;
		}
		default:
			std::cout << "NOT FOUND" << std::endl;
	}
}
