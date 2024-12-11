/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:16:35 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/27 14:26:38 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {

	protected:

		std::string		_type;

	public:

		Animal( void );
		Animal( std::string type );
		Animal( const Animal& source_object );
		Animal&		operator=( const Animal& source_object );
		virtual ~Animal( void );

		virtual std::string		getType( void ) const;
		virtual void	makeSound( void ) const;
};

#endif