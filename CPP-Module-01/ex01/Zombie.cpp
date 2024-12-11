/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 22:54:46 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/13 11:41:52 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {

	std::cout << "Zombie has been created" << std::endl;

	return;
}

Zombie::~Zombie( void ) {

	std::cout << BOLD_RED << this->_name << RESET << " has been destroyed" << std::endl;

	return;
}

void	Zombie::setName( std::string name ) {

	this->_name = name;

	return;
}

/* It lets zombies to announce themselves as following */
/* <name>: BraiiiiiiinnnzzzZ... or foo: BraiiiiiiinnnzzzZ... */
void	Zombie::announce( void ) {
	
	std::cout << BOLD_GREEN << this->_name << RESET << ": BraiiiiiiinnnzzzZ..." << std::endl;

	return;
}
