/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 07:00:02 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/20 19:05:18 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _value( 0 ) {

    std::cout << "Default constructor called" << std::endl;

	return;
}

Fixed::Fixed( const int integerValue ) : _value( integerValue << Fixed::_fractionalBits ) {

    std::cout << "Int constructor called" << std::endl;

	return;
}

Fixed::Fixed( const float floatValue ) : _value( static_cast<int>( roundf( floatValue * ( 1 << Fixed::_fractionalBits ) ) ) ) {

    std::cout << "Float constructor called" << std::endl;

	return;
}

/* copy constructor */
/* It's used when we want to create a new object as a copy of an existing object */
Fixed::Fixed( const Fixed& fixed ) {

    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;

	return;
}

/* copy assignment operator */
/* It's used when we want to copy the value from one object to another existing object  */
Fixed& Fixed::operator=( const Fixed& fixed ) {

    std::cout << "Copy assignment operator called" << std::endl;
    
    if ( this != &fixed )
        this->_value = fixed.getRawBits();

    return *this;
}

/* It is an overload of the << operator for std::ostream and Fixed objects */
/* It defines how Fixed objects should be outputted when used with std::cout or any other std::ostream. */
/* It helps in displaying the values always as float */
/* this will include outputting both integers and floats */
std::ostream &operator<<( std::ostream &ostream, const Fixed &fixed ) {

    ostream << fixed.toFloat();

    return ostream;
}

Fixed::~Fixed( void ) {

    std::cout << "Destructor called" << std::endl;

	return;
}

int		Fixed::getRawBits( void ) const {

    std::cout << "getRawBits member function called" << std::endl;

    return this->_value;
}

void	Fixed::setRawBits( int const raw ) {

    std::cout << "setRawBits member function called" << std::endl;

    this->_value = raw;

	return;
}

float   Fixed::toFloat( void ) const {

    return static_cast<float>( _value ) / ( 1 << Fixed::_fractionalBits );
}

int     Fixed::toInt( void ) const {

    return this->_value >> Fixed::_fractionalBits;
}