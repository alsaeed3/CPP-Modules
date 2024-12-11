/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 12:17:36 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/15 14:41:23 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void ) : _type( "fist" ) {

	return;
}

Weapon::Weapon(const std::string& type) : _type(type) {

	return;
}

Weapon::~Weapon( void ) {
	
	return;
}

const std::string&	Weapon::getType( void ) const {

    return _type;
}

void	Weapon::setType(const std::string& type) {

    this->_type = type;
	
	return;
}