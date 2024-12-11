/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 03:43:34 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/09 17:34:32 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* It creates a zombie, name it, and the zombie announces itself */
void	randomChump( std::string name ) {

	Zombie	*randomChump = new Zombie(name);

	randomChump->announce();
	delete randomChump;

	return;
}
