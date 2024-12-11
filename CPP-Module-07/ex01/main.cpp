/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 19:51:33 by alsaeed           #+#    #+#             */
/*   Updated: 2024/07/31 21:00:56 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// int main( void ) {

// 	int tab[] = { 0, 1, 2, 3, 4 };

// 	::iter( tab, 5, printT );

// 	std::cout << std::endl;

// 	std::string tab2[] = { "zero", "one", "two", "three", "four" };
// 	::iter( tab2, 5, printT );

// 	return 0;
// }

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  iter( tab, 5, print<const int> );
  iter( tab2, 5, print<Awesome> );

  return 0;
}