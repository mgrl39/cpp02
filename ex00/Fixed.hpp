/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 23:36:58 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/03 16:30:49 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

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
		Fixed(const Fixed& other);		// copy assignment operator overload.
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

};

#endif
