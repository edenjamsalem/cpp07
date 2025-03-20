#include "Array.hpp"

int main()
{
	std::cout << ("\033[35mempty\033[0m\n");
	Array<int> empty;
	try
	{
		std::cout << empty[3];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << ("\n\033[35mint array\033[0m\n");
	Array<int> a(5);
	for (size_t i = 0; i < a.Size(); i++)
		a[i] = i;
	for (size_t i = 0; i < a.Size(); i++)
		std::cout << a[i];

	std::cout << std::endl;
	
	std::cout << ("\n\033[35mcopy assignment\033[0m\n");
	Array<int> d(5);
	for (size_t i = 0; i < d.Size(); i++)
		d[i] = i;
	d = a;
	for (size_t i = 0; i < a.Size(); i++)
		std::cout << a[i];

	std::cout << std::endl;

	std::cout << ("\n\033[35mchar array\033[0m\n");
	Array<char> b(5);
	for (size_t i = 0; i < b.Size(); i++)
		b[i] = 'a' + i;
	for (size_t i = 0; i < b.Size(); i++)
		std::cout << b[i];

	std::cout << std::endl;

	std::cout << ("\n\033[35mcopy constructor\033[0m\n");
	Array<char> c = b;
	for (size_t i = 0; i < b.Size(); i++)
		b[i] = 'a' + i;
	for (size_t i = 0; i < b.Size(); i++)
		std::cout << b[i];

}
