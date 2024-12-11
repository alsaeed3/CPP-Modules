/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 03:43:32 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/09 17:34:48 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* It creates a zombie, name it, and return a pointer to it, */
/* so you can use it outside of the function scope */
Zombie*		newZombie( std::string name ) {

	Zombie	*newZombie = new Zombie( name );

	return newZombie;
}
