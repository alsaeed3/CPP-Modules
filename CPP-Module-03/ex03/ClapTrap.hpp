/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:20:41 by alsaeed           #+#    #+#             */
/*   Updated: 2024/05/01 14:22:43 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class	ClapTrap {

	private:

		std::string					_name;
		unsigned int				_hp;
		unsigned int				_ep;
		unsigned int				_ad;
		static const unsigned int	_defHp = 10;
		static const unsigned int	_defEp = 10;
		static const unsigned int	_defAd = 0;

	public:

		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap& source );
		~ClapTrap( void );
		ClapTrap&		operator=( const ClapTrap& source );
		
		std::string		getName( void ) const;
		unsigned int	getHp( void ) const;
		unsigned int	getEp( void ) const;
		unsigned int	getAd( void ) const;

		void			setName( std::string name );
		void			setHp( unsigned int hp );
		void			setEp( unsigned int ep );
		void			setAd( unsigned int ad );

		void			attack( const std::string &target );
		void			takeDamage( unsigned int amount );
		void			beRepaired( unsigned int amount );
};

#endif