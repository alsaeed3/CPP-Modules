/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 12:17:26 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/15 17:41:32 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name( name ), _weapon( NULL ) {

	return;
}

HumanB::~HumanB( void ) {

	return;
}

void	HumanB::setWeapon( Weapon &weapon ) {
	
	this->_weapon = &weapon;

	return;
}

void	HumanB::attack( void ) const {

	if ( this->_weapon )
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attacks with their fists" << std::endl;

	return;
}
