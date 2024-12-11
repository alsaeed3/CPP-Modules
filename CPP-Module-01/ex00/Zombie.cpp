/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 03:43:36 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/13 11:39:56 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name( name ) {
	
	std::cout << BOLD_GREEN << this->_name << RESET <<" has been created" << std::endl;
	
	return;
}

Zombie::~Zombie( void ) {

	std::cout << BOLD_RED << this->_name << RESET << " has been destroyed" << std::endl;

	return;
}

/* It lets zombies to announce themselves as following */
/* <name>: BraiiiiiiinnnzzzZ... or foo: BraiiiiiiinnnzzzZ... */
void	Zombie::announce( void ) {
	
	std::cout << BOLD_GREEN << this->_name << RESET << ": BraiiiiiiinnnzzzZ..." << std::endl;

	return;
}
