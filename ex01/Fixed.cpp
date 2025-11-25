/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 23:37:04 by meghribe          #+#    #+#             */
/*   Updated: 2025/11/25 22:20:36 by meghribe         ###   ########.fr       */
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

// TODO: i think thats it
Fixed::Fixed(const int param): raw_bits(param), number_fract_bits(8)
{
	std::cout << "Int constructor called" << std::endl;
}

// TODO: i think thats it
std::ostream& Fixed::operator <<(std::ostream& os, const Fixed fixed)
{
	return (os);
}
