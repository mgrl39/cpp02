/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 23:37:04 by meghribe          #+#    #+#             */
/*   Updated: 2025/11/27 20:11:49 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(): raw_bits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) 
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
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
	std::cout << "getRawBits member function called" << std::endl;
	return (this->raw_bits);
}

void	Fixed::setRawBits(int const raw)
{
	this->raw_bits = raw;
}

// TODO
Fixed::Fixed(const int param): raw_bits(param)
{
	std::cout << "Int constructor called" << std::endl;
}

// TODO
Fixed::Fixed(const float param): raw_bits(param)
{
	std::cout << "Float constructor called" << std::endl;
}

// TODO
float	Fixed::toFloat( void ) const
{
	return (float)0;
}

int	Fixed::toInt( void ) const
{
	return (0);
}

// TODO
std::ostream& operator<< (std::ostream& stream, const Fixed& fixed)
{
	std::cout << "LOL" << std::endl;
}
