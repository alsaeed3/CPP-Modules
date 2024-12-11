/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 12:17:29 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/15 18:25:00 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class	HumanB {

	private:

		std::string	_name;
		Weapon*		_weapon;

	public:

		HumanB( std::string name );
		~HumanB( void );
		
		void	setWeapon( Weapon &weapon );
		void	attack( void ) const;

};

#endif