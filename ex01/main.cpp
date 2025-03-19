#include "iter.hpp"
#include <iostream> 
#include <cstring> 

void convertUpper(char &c)
{
	c = toupper(c);
}

int main()
{
	char a[] = "heLLo My nAme IS eDen";

	std::cout << a << std::endl;
	iter(a, strlen(a), convertUpper);
	std::cout << a << std::endl;

}