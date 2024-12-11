/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:00:28 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/27 14:20:32 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include <iostream>
# include <string>

class WrongCat : public WrongAnimal {

	public:
	
			WrongCat( void );
			WrongCat( const WrongCat& source );
			WrongCat&	operator=( const WrongCat& source );
			~WrongCat( void );

			void	makeSound( void ) const;
};

#endif