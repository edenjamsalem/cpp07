#include "whatever.hpp"
#include <iostream> 

int main()
{
	int a = 99;
	int b = 100;

	char c = 'c';
	char d = 'd';
	
	std::cout << "(int) a: " << a << std::endl;
	std::cout << "(int) b: " << b << std::endl;
	std::cout << "(int) min: " << min(a, b) << std::endl;
	std::cout << "(int) max: " << max(a, b) << std::endl;
	swap(a, b);
	std::cout << "(int) swap a: " << a << std::endl;
	std::cout << "(int) swap b: " << b << std::endl << std::endl;

	std::cout << "(char) c: '" << c << "'" << std::endl;
	std::cout << "(char) d: '" << d << "'" << std::endl;
	std::cout << "(char) min: " << min(c, d) << std::endl;
	std::cout << "(char) max: " << max(c, d) << std::endl;
	swap(c, d);
	std::cout << "(char) swap c: " << c << std::endl;
	std::cout << "(char) swap d: " << d << std::endl << std::endl;

}