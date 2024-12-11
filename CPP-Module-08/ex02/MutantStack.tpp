/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:28:25 by alsaeed           #+#    #+#             */
/*   Updated: 2024/08/21 19:34:42 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
MutantStack<T>::MutantStack( void ) : std::stack<T>() {

	return;
}

template <typename T>
MutantStack<T>::MutantStack( MutantStack<T> const &src ) : std::stack<T>(src) {

	return;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=( MutantStack<T> const &rhs ) {

	if ( this != &rhs ) {

		std::stack<T>::operator=(rhs);
	}

	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack( void ) {

	return;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {

	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {

	return this->c.end();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const {

	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const {

	return this->c.end();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin() {

	return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend() {

	return this->c.rend();
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const {

	return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const {

	return this->c.rend();
}
