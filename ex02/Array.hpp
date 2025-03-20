#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T>
class Array
{
	private:
		T 		*_arr;
		size_t	_size;

	public:
		Array();
		Array(unsigned int i);
		Array(const Array& other);
		~Array();
		
		Array&	operator=(const Array& other);
		T&	operator[](unsigned int i);
		size_t	Size();

		class OutOfBoundsException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#include "Array.tpp"
#endif
