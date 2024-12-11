/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 22:50:29 by alsaeed           #+#    #+#             */
/*   Updated: 2024/07/17 12:05:20 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <Data.hpp>

class Serializer {

	private:

		Serializer( void );

	public:

		static unsigned long	serialize(Data* ptr);
		static Data*			deserialize(unsigned long raw);
};

#endif // SERIALIZER_HPP