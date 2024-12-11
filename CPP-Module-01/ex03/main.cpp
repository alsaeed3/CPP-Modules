/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 12:17:32 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/15 17:47:22 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
    
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
    
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    
    return 0;
}

// int main() {
//     Weapon axe("axe");
//     Weapon bow("bow");
//     Weapon* empty = nullptr;

//     HumanA hA("Bob", axe);
//     HumanB hB("Alice");

//     hA.attack();
//     hB.attack();

//     hB.setWeapon(&bow);
//     hB.attack();

//     hB.setWeapon(empty);
//     hB.attack();

//     return 0;
// }