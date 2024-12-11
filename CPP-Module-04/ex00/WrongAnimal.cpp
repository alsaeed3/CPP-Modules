/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:00:13 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/27 15:16:20 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type( "Default" ) {

	std::cout << "[ Default ] WrongAnimal Constructor has been called" << std::endl;

	return;
}

WrongAnimal::WrongAnimal( std::string type ) : _type( type ) {

	std::cout << "[ " << this->getType() << " ] WrongAnimal Constructor has been called" << std::endl;

	return;
}

WrongAnimal::WrongAnimal( const WrongAnimal& source_object ) {

	std::cout << "WrongAnimal Copy Constructor has been called" << std::endl;

	*this = source_object;

	return;
}

WrongAnimal&			WrongAnimal::operator=( const WrongAnimal& source_object ) {

	std::cout << "WrongAnimal Copy Assignment Operator has been called" << std::endl;

	if ( this != &source_object )
		this->_type = source_object._type;

	return *this;
}

WrongAnimal::~WrongAnimal( void ) {
	
	std::cout << "[ " << this->getType() << " ] WrongAnimal Destructor has been called" << std::endl;

	return;
}

std::string		WrongAnimal::getType( void ) const {

	return this->_type;
}

void			WrongAnimal::makeSound( void ) const {

	std::cout << "Default WrongAnimal Sound!!!" << std::endl;

	return;
}