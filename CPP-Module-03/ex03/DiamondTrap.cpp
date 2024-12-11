/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 12:54:14 by alsaeed           #+#    #+#             */
/*   Updated: 2024/05/01 15:13:13 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : _name( "Default" )  {
	
	std::cout << "DEFAULT DiamondTrap Constructor has been called" << std::endl;

	return;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name + "_clap_name" ), FragTrap( name ), ScavTrap( name ), _name( name ) {
	
	std::cout << this->getName() << " DiamondTrap Constructor has been called" << std::endl;

	return;
}

DiamondTrap::DiamondTrap( const DiamondTrap& source ) : ClapTrap( source ), FragTrap( source ), ScavTrap( source ), _name( source._name ) {
	
	std::cout << "DiamondTrap Copy Constructor has been called" << std::endl;
	*this = source;

	return;
}

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& source ) {
	
	std::cout << "DiamondTrap Copy Assignment Operator has been called" << std::endl;

	if ( this != &source) {

		this->setName( source.getName() );
		this->setHp( source.getHp() );
		this->setEp( source.getEp() );
		this->setAd( source.getAd() );
	}

	return *this;
}

DiamondTrap::~DiamondTrap( void ) {
	
	std::cout << "DiamondTrap Destructor has been called" << std::endl;

	return;
}

void	DiamondTrap::attack( const std::string& target ) {
	
	ScavTrap::attack( target );

	return;
}

void	DiamondTrap::whoAmI( void ) {

	std::cout << "DiamondTrap is " << this->_name << " and ClapTrap is " << ClapTrap::getName() << std::endl;

	return;
}

void	DiamondTrap::displayStats( void ) const {

	std::cout << "Diamond name is " << this->_name << ", HP is " << this->getHp() << ", EP is " << this->getEp() << ", AD is " << this->getAd() << std::endl;

	return;
}