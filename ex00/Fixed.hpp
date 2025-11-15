/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 23:36:58 by meghribe          #+#    #+#             */
/*   Updated: 2025/11/15 23:50:55 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int					fixed_point_nbr_value;
		static const int	number_fract_bits = 8;

	public:
		Fixed(); 				// default constructor 
		~Fixed();				// a destructor
		Fixed& operator=(const Fixed& other);	// overloading copy assignment operator
		Fixed(const Fixed&);			// copy assignment operator overload.
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

};

#endif
