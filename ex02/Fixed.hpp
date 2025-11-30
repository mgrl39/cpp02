/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 23:36:58 by meghribe          #+#    #+#             */
/*   Updated: 2025/11/30 21:43:58 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <math.h>
#include <iostream>

/*
 * An integer to store the fixed-point number value --> raw_bits
 * A static constant integer to store the number of fractional bits. 
 * 	Its value will always be the integer literal 8.
 */
class Fixed
{
	private:
		int					raw_bits;
		static const int	number_fract_bits = 8;

	public:
		Fixed(); 				// default constructor 
		~Fixed();				// a destructor
		Fixed& operator=(const Fixed& other);	// overloading copy assignment operator
		Fixed(const Fixed&);			// copy assignment operator overload.
		Fixed(const int param);
		Fixed(const float param);
		float	toFloat( void ) const;
		int		getRawBits(void) const;
		int		toInt( void ) const;
		void	setRawBits(int const raw);

		Fixed operator>(const Fixed& other);
		Fixed operator<(const Fixed& other);
		Fixed operator>=(const Fixed& other);
		Fixed operator<=(const Fixed& other);
		Fixed operator==(const Fixed& other);
		Fixed operator!=(const Fixed& other);
		
		Fixed operator+(const Fixed &n);
		Fixed operator-(const Fixed &n);
		Fixed operator*(const Fixed&n);
		Fixed operator/(const Fixed&n);

		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);

		static Fixed min(const Fixed& a, const Fixed& b);
		static Fixed min(Fixed& a, Fixed& b);
		static Fixed max(const Fixed& a, const Fixed& b);
		static Fixed max(Fixed& a, Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
