/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 07:01:32 by eavilov           #+#    #+#             */
/*   Updated: 2023/02/22 16:26:46 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed {
	private:
		int					integer;
		static const int	fractionalInteger = 8;
	public:
		Fixed(const Fixed &cpy); // copy constructor
		Fixed &operator=(const Fixed &ass); // surcharge
		Fixed();
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
