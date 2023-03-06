/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 07:01:32 by eavilov           #+#    #+#             */
/*   Updated: 2023/02/22 16:27:14 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed 
{
	private:
		int					integer;
		float				fValue;
		static const int	fractionalInteger = 8;
	public:
		Fixed &operator--(); // --Fixed
		Fixed operator--(int); // Fixed--
	    Fixed &operator++(); // ++Fixed
        Fixed operator++(int); // Fixed++
	
		Fixed operator+(const Fixed &plus) const; // Fixed + X
		Fixed operator-(const Fixed &minus) const; // Fixed - X
		Fixed operator*(const Fixed &mult) const; // Fixed * X
		Fixed operator/(const Fixed &div) const; // Fixed / X
	
		bool operator>(const Fixed &comp);
		bool operator<(const Fixed &comp);
		bool operator<=(const Fixed &comp);
		bool operator>=(const Fixed &comp);
		bool operator!=(const Fixed &comp);
		bool operator==(const Fixed &comp);

		Fixed &operator=(const Fixed &ass);

		static const Fixed &min(const Fixed &first, const Fixed &second);
		static const Fixed &max(const Fixed &first, const Fixed &second);
		static Fixed &min(Fixed &first, Fixed &second);
		static Fixed &max(Fixed &first, Fixed &second);
		Fixed(const Fixed &cpy); // copy constructor
		Fixed(int nb_int);
		Fixed(const float nb_float);
		Fixed();
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		float	getF(void) const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &i);

#endif
