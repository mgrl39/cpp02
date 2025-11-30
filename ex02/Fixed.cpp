/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 23:37:04 by meghribe          #+#    #+#             */
/*   Updated: 2025/11/30 21:12:09 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <math.h>
#include <iostream>

Fixed::Fixed(): raw_bits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) : raw_bits(other.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->raw_bits = other.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->raw_bits);
}

void	Fixed::setRawBits(int const raw)
{
	this->raw_bits = raw;
}

/*
 * A constructor that takes a constant integer as a parameter.
 * It converts it to the corresponding fixed-point value.
 */
Fixed::Fixed(const int param): raw_bits(param << this->number_fract_bits)
{
	std::cout << "Int constructor called" << std::endl;
}

/*
 * A constructor that takes a constant floating-point number as a parameter.
 * It converts it to the corresponding fixed-point value.
 */
Fixed::Fixed(const float param): raw_bits(roundf((param) * (1 << this->number_fract_bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->getRawBits() / (float)(1 << this->number_fract_bits));
}

int	Fixed::toInt( void ) const
{
	return (this->getRawBits() >> this->number_fract_bits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	return (os << (fixed.toFloat()));
}
