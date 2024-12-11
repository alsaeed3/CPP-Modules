/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:15:22 by alsaeed           #+#    #+#             */
/*   Updated: 2024/07/31 21:01:04 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <class T>
void	swap( T &a, T &b ) {

	T	tmp;
	
	tmp = a;
	a = b;
	b = tmp;

	return;
}

template <class T>
T	min( T a, T b ) {

	if ( a < b ) {

		return ( a );
	} else {

		return ( b );
	}
}

template <class T>
T	max( T a, T b ) {

	if ( a > b ) {

		return ( a );
	} else {

		return ( b );
	}
}


#endif