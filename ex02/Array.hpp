#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
	private:
		T _arr[];

	public:
		Array();
		Array(const Array& other);
		Array& operator=(const Array& other);
		~Array();

		
};

#endif
