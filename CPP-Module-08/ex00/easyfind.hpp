/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:04:11 by alsaeed           #+#    #+#             */
/*   Updated: 2024/08/19 18:46:00 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <algorithm>
# include <vector>
# include <list>

template<typename T> 
typename T::iterator easyfind( T &container, int val ) {

	typename T::iterator it = std::find( container.begin(), container.end(), val );

	if ( it == container.end() ) {

		throw std::exception();
	}
	return it;
}

#endif