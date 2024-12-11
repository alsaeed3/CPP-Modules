/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:59:53 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/27 15:06:51 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal {

	protected:

		std::string		_type;

	public:

		WrongAnimal( void );
		WrongAnimal( std::string type );
		WrongAnimal( const WrongAnimal& source_object );
		WrongAnimal&		operator=( const WrongAnimal& source_object );
		virtual	~WrongAnimal( void );

		virtual std::string		getType( void ) const;
		void	makeSound( void ) const;
};

#endif