/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp	                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:45:50 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/11 18:54:43 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact	list[8];
	public:
		void GetAll(int limit);
		void GetContact(int index);
		void FillList(int index);
};

#endif
