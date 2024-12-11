/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:04:24 by alsaeed           #+#    #+#             */
/*   Updated: 2024/08/19 18:50:50 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main( void ) {

	// in range value
	std::vector<int> vec1;
	vec1.push_back(10);
	vec1.push_back(20);
	vec1.push_back(30);
	vec1.push_back(40);
	vec1.push_back(50);
	try {
		std::vector<int>::iterator it = easyfind(vec1, 30);
		std::cout << "vec1: Found the value 30 at position: " << std::distance(vec1.begin(), it) << std::endl;
	} catch( std::exception const &e ) {
		std::cout << "Value not found in container" << std::endl;
	}

	std::list<int> lst1;
	lst1.push_back(10);
	lst1.push_back(20);
	lst1.push_back(30);
	lst1.push_back(40);
	lst1.push_back(-50);
	try {
		std::list<int>::iterator it = easyfind(lst1, -50);
		std::cout << "lst1: Found the value -50 at position: " << std::distance(lst1.begin(), it) << std::endl;
	} catch( std::exception const &e ) {
		std::cout << "Value not found in container" << std::endl;
	}

	// out range value
	std::vector<int> vec2;
	vec2.push_back(10);
	vec2.push_back(20);
	vec2.push_back(30);
	vec2.push_back(40);
	vec2.push_back(50);
	try {
		std::vector<int>::iterator it = easyfind(vec2, 60);
		std::cout << "vec2: found the value 60 at position: " << std::distance(vec2.begin(), it) << std::endl;
	} catch( std::exception const &e ) {
		std::cout << "vec2: Value not found in container" << std::endl;
	}

	std::list<int> lst2;
	lst2.push_back(10);
	lst2.push_back(20);
	lst2.push_back(30);
	lst2.push_back(40);
	lst2.push_back(-50);
	try {
		std::list<int>::iterator it = easyfind(lst2, -60);
		std::cout << "lst2: Found the value -60 at position: " << std::distance(lst2.begin(), it) << std::endl;
	} catch( std::exception const &e ) {
		std::cout << "lst2: Value not found in container" << std::endl;
	}
}