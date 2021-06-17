#include "iter.hpp"

template<typename T>
void NumberAscii(const T&arg)
{
    std::cout << arg;
}

int main()
{
    {
		std::cout << "--------TEST-0--------" << std::endl;
		int array[8] = {1, 2, 3, 4, 5, 6, 7};
		iter(array, 8, NumberAscii);
	}
	{
		std::cout << "--------TEST-1--------" << std::endl;
		char array[8] = {'a', 'g', 'x', 'v', 'r', 'm', 'z'};
		iter(array, 8, NumberAscii);
	}
	{
		std::cout << "--------TEST-2--------" << std::endl;
		double array[3] = {42.123, 21.52, 24.52};
		iter(array, 3, NumberAscii);
	}
}