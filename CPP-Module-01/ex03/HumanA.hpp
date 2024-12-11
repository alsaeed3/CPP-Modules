/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 12:17:24 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/15 18:24:51 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class	HumanA {

	private:

		std::string	_name;
		Weapon&		_weapon;

	public:

		HumanA( std::string name, Weapon &weapon );
		~HumanA( void );

		void	setName( std::string name );
		void	setWeapon( Weapon &weapon );
		void	attack( void ) const;

};

#endif