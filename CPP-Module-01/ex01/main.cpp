/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 07:47:31 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/13 11:58:13 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main( void ) {

	int		N = 5;
	Zombie	*Horde = zombieHorde( N, "zombieHorde" );

	for ( int i = 0; i < N; i++ ) {
		
		Horde[i].announce();
	}

	delete[] Horde;

	return 0;
}
