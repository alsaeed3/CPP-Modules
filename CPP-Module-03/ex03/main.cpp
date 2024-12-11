/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:06:34 by alsaeed           #+#    #+#             */
/*   Updated: 2024/05/01 15:08:58 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void ) {

    DiamondTrap diamondObject( "Ali" );

    diamondObject.whoAmI();
    diamondObject.attack( "BlackHole" );
    diamondObject.guardGate();
    diamondObject.highFiveGuys();
    diamondObject.displayStats();

    return 0;
}