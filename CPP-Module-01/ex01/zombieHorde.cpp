/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 07:47:34 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/13 08:47:49 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {

	if ( N <= 0 ) {

		std::cerr << "The number of Zombies should be 1 or more" << std::endl;
		return NULL;
	}
	Zombie	*zombieHorde = new Zombie[N];
	for ( int i = 0; i < N; i++ )
		zombieHorde[ i ].setName( name );
	return zombieHorde;
}
