/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:20:57 by alsaeed           #+#    #+#             */
/*   Updated: 2024/05/01 15:18:00 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap *scav = new ScavTrap("scav1");

    scav->beRepaired(10);
    delete scav;

    ScavTrap scav2( "guard" );
    
    scav2.guardGate();

    return 0;
}