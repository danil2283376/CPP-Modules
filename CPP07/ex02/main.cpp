#include "Array.hpp"

int main()
{
    Array<int> k(12);
	std::cout << "DEFAULT CREATE ARRAY\n";
	for (unsigned int i = 0; i < k.Size(); i++) {
		k[i] = i;
		std::cout << "\t" << k[i];
	}
	std::cout << std::endl;
	std::cout << "TRY CATH\n";
	try
	{
	   std::cout << k[31];
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	Array<int> y;
	std::cout << "OPERATOR '='\n";
	y = k;
	for (unsigned int i = 0; i < y.Size(); i++)
		std::cout << "\t" << y[i];
	std::cout << std::endl;
	std::cout << "COPY CONSTRUCTOR\n";
	Array<int> z(y);
	for (unsigned int i = 0; i < z.Size(); i++)
		std::cout << "\t" << z[i];
	std::cout << std::endl;
	return 0;
}