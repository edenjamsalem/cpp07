#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template<typename T>
Array<T>::Array() : _arr(NULL), _size(0) {}

template<typename T>
Array<T>::Array(unsigned int i) : _arr(new T[i]), _size(i) {}

template<typename T>
Array<T>::Array(const Array& other)
{
	_size = other._size;
	_arr = new T[_size];
	for (size_t i = 0; i < _size; i++)
		_arr[i] = other._arr[i];	
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	if (this != &other)
	{
		_size = other._size;
		delete[] _arr;

		_arr = new T[_size];
		for (size_t i = 0; i < _size; i++)
			_arr[i] = other._arr[i];	
	}
	return *this;
}

template<typename T>
Array<T>::~Array()
{
	delete[] _arr;	
}

template<typename T>
const char	*Array<T>::OutOfBoundsException::what() const throw()
{
	return ("Array index out of bounds!");
}

template<typename T>
T& Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw OutOfBoundsException();
	return (_arr[i]);
}

template<typename T>
size_t	Array<T>::Size()
{
	return (_size);
}
#endif
