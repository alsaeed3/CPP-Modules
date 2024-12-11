/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 19:51:42 by alsaeed           #+#    #+#             */
/*   Updated: 2024/07/31 21:00:57 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <class T>
void	printT(T const &x) {

	std::cout << x << std::endl;

	return;
}

template <class T>
void	iter(T *array, std::size_t len, void (*func)(T const &)) {

	for (std::size_t i = 0; i < len; i++) {

		func(array[i]);
	}

	return;
}

template <class T>
void	iter(T *array, std::size_t len, void (*func)(T &)) {

	for (std::size_t i = 0; i < len; i++) {

		func(array[i]);
	}

	return;
}

#endif