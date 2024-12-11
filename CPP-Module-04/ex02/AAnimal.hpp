/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:16:35 by alsaeed           #+#    #+#             */
/*   Updated: 2024/05/01 15:47:06 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

/*	The following class is the abstract of Animal class 
	by adding pure virtual functions to the class 
	the class will prevent instantiation of the class 
	We can turn a virtual function to pure by = it to 0		*/
class AAnimal {

	protected:

		std::string		_type;

	public:

		AAnimal( void );
		AAnimal( std::string type );
		AAnimal( const AAnimal& source_object );
		AAnimal&	operator=( const AAnimal& source_object );
		virtual ~AAnimal( void ) = 0;
		
		virtual std::string		getType( void ) const;
		virtual void			makeSound( void ) const = 0;
};

#endif