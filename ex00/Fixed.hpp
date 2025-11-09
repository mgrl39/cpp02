/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 23:36:58 by meghribe          #+#    #+#             */
/*   Updated: 2025/11/08 17:07:14 by meghribe         ###   ########.fr       */
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
				Fixed();
				Fixed(const Fixed& const);
				Fixed
				~Fixed();
				int		getRawBits(void) const;
				void	setRawBits(int const raw);

};

#endif
