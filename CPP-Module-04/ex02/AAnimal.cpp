/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:16:41 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/28 16:47:36 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : _type( "Default" ) {

	std::cout << "[ Default ] AAnimal Constructor has been called" << std::endl;

	return;
}

AAnimal::AAnimal( std::string type ) : _type( type ) {

	std::cout << "[ " << this->getType() << " ] AAnimal Constructor has been called" << std::endl;

	return;
}

AAnimal::AAnimal( const AAnimal& source_object ) {

	std::cout << "AAnimal Copy Constructor has been called" << std::endl;

	*this = source_object;

	return;
}

AAnimal&			AAnimal::operator=( const AAnimal& source_object ) {

	std::cout << "AAnimal Copy Assignment Operator has been called" << std::endl;

	if ( this != &source_object )
		this->_type = source_object._type;

	return *this;
}

AAnimal::~AAnimal( void ) {
	
	std::cout << "[ " << this->getType() << " ] AAnimal Destructor has been called" << std::endl;

	return;
}

std::string		AAnimal::getType( void ) const {

	return this->_type;
}

void			AAnimal::makeSound( void ) const {

	std::cout << "Default AAnimal Sound!!!" << std::endl;

	return;
}