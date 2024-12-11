/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:16:41 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/27 15:16:07 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _type( "Default" ) {

	std::cout << "[ Default ] Animal Constructor has been called" << std::endl;

	return;
}

Animal::Animal( std::string type ) : _type( type ) {

	std::cout << "[ " << this->getType() << " ] Animal Constructor has been called" << std::endl;

	return;
}

Animal::Animal( const Animal& source_object ) {

	std::cout << "Animal Copy Constructor has been called" << std::endl;

	*this = source_object;

	return;
}

Animal&			Animal::operator=( const Animal& source_object ) {

	std::cout << "Animal Copy Assignment Operator has been called" << std::endl;

	if ( this != &source_object )
		this->_type = source_object._type;

	return *this;
}

Animal::~Animal( void ) {
	
	std::cout << "[ " << this->getType() << " ] Animal Destructor has been called" << std::endl;

	return;
}

std::string		Animal::getType( void ) const {

	return this->_type;
}

void			Animal::makeSound( void ) const {

	std::cout << "Default Animal Sound!!!" << std::endl;

	return;
}