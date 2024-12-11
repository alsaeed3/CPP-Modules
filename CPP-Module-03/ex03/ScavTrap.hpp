/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 19:17:36 by alsaeed           #+#    #+#             */
/*   Updated: 2024/05/01 14:22:48 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

	public:

		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap& source );
		ScavTrap&	operator=( const ScavTrap& source );
		~ScavTrap( void );
		
		void	attack( const std::string& target );
		void	guardGate( void );
};

#endif