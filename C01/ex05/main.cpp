/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:46:24 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/16 20:00:34 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/*
	"DEBUG"
	"INFO"
	"WARNING"
	"ERROR"
*/

int main()
{
	Harl		Customer;
	
	Customer.complain("DEBUG");
	std::cout << std::endl;
	Customer.complain("INFO");
	std::cout << std::endl;
	Customer.complain("WARNING");
	std::cout << std::endl;
	Customer.complain("ERROR");
	std::cout << std::endl;
	Customer.complain("ahah bite XD");
	std::cout << std::endl;
	Customer.complain("UwU");
	std::cout << std::endl;
	Customer.complain("");
	return (0); 
}
