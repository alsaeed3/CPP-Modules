/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 12:17:21 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/15 17:33:11 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : _name(name), _weapon(weapon) {

	return;
}

HumanA::~HumanA( void ) {

	return;
}

void	HumanA::attack( void ) const {

	std::cout << _name << " attacks with their " << this->_weapon.getType() << std::endl;

	return;
}
