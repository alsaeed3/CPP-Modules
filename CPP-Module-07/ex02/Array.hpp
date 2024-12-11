/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:19:55 by alsaeed           #+#    #+#             */
/*   Updated: 2024/07/31 21:00:50 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <class T>
class Array {
	
	private:
		T		*_array;
		size_t	_len;
		
	public:

		Array();
		Array(unsigned int n);
		Array(const Array &src);
		~Array();
		Array &operator=(const Array &src);
		T &operator[](unsigned int i);
		const T &operator[](unsigned int i) const;
		unsigned int size() const;
		class OutOfLimitsException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

#include "Array.tpp"

#endif