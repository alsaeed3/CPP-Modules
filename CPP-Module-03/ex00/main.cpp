/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:20:57 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/23 19:15:11 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clap("Clap1");
    ClapTrap clap2(clap);
    ClapTrap clap3;

    clap3 = clap2;
    clap3.setName("Clap3");
    clap2.setName("Clap2");
	std::cout << std::endl;
    for (int i = 0; i < 15; i++) {
        
		clap.attack(clap2.getName());
	}
	std::cout << std::endl;
    clap2.takeDamage(14);
	std::cout << std::endl;
    clap2.beRepaired(10);
	std::cout << std::endl;
    clap2.beRepaired(10);
	std::cout << std::endl;
    clap2.attack(clap2.getName());
	std::cout << std::endl;
    std::cout << "=====================================" << std::endl;
    std::cout << "clap1 Hit-Points   : " << clap.getHp() << std::endl;
    std::cout << "clap1 Energy-Points: " << clap.getEp() << std::endl;
    std::cout << "clap1 Attack-Damage: " << clap.getAd() << std::endl;
    std::cout << "=====================================" << std::endl;
	std::cout << std::endl;
	std::cout << "=====================================" << std::endl;
    std::cout << "clap2 Hit-Points   : " << clap2.getHp() << std::endl;
    std::cout << "clap2 Energy-Points: " << clap2.getEp() << std::endl;
    std::cout << "clap2 Attack-Damage: " << clap2.getAd() << std::endl;
    std::cout << "=====================================" << std::endl;
	std::cout << std::endl;
    return 0;
}