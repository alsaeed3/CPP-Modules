/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:23:56 by alsaeed           #+#    #+#             */
/*   Updated: 2024/08/01 19:06:12 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <class T>
Array<T>::Array() : _array(NULL), _len(0) {
	
	return;
}

template <class T>
Array<T>::Array(unsigned int n) : _array(NULL), _len(n) {

    if (n > 0) {

        _array = new T[n]();
    } else {

        throw std::invalid_argument("Size of array cannot be zero");
    }
}

template <class T>
Array<T>::Array(const Array &src) : _array(new T[src._len]), _len(src._len) {

        for (unsigned int i = 0; i < _len; ++i) {
            _array[i] = src._array[i];
        }

	return;
}

template <class T>
Array<T>::~Array() {
	
	delete[] _array;
	
	return;
}

template <class T>
Array<T> &Array<T>::operator=(const Array &src) {

    if (this != &src) {

        delete[] _array;
        _len = src._len;
        _array = new T[_len];

        for (std::size_t i = 0; i < _len; i++) {

            _array[i] = src._array[i];
        }
    }

    return *this;
}

template <class T>
T &Array<T>::operator[](unsigned int i) {
	
	if (i >= _len) {
		
		throw OutOfLimitsException();
	}

	return _array[i];
}

template <class T>
const T &Array<T>::operator[](unsigned int i) const {
	
	if (i >= _len) {
		
		throw OutOfLimitsException();
	}
	
	return _array[i];
}

template <class T>
unsigned int Array<T>::size() const {
	
	return _len;
}

template <class T>
const char *Array<T>::OutOfLimitsException::what() const throw() {
	
	return "Error: out of limits";
}
