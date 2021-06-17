#include "whatever.hpp"

int main()
{
    std::cout << "-------MYTEST-------" << std::endl;
	std::cout << "--------SWAP--------" << std::endl;
	{
		std::cout << "--------int---------" << std::endl;
		int one = 21;
		int two = 42;
		std::cout << "one = " << one << std::endl;
		std::cout << "two = " << two << std::endl;
		std::cout << "Calling function swap" << std::endl;
		swap(one, two);
		std::cout << "one = " << one << std::endl;
		std::cout << "two = " << two << std::endl;
	}
	{
		std::cout << "--------double------" << std::endl;
		double one = 21.21;
		double two = 42.42;
		std::cout << "one = " << one << std::endl;
		std::cout << "two = " << two << std::endl;
		std::cout << "Calling function swap" << std::endl;
		swap(one, two);
		std::cout << "one = " << one << std::endl;
		std::cout << "two = " << two << std::endl;
	}
	{
		std::cout << "--------char--------" << std::endl;
		char one = 'a';
		char two = 'b';
		std::cout << "one = " << one << std::endl;
		std::cout << "two = " << two << std::endl;
		std::cout << "Calling function swap" << std::endl;
		swap(one, two);
		std::cout << "one = " << one << std::endl;
		std::cout << "two = " << two << std::endl;
	}
	{
		std::cout << "--------string------" << std::endl;
		std::string one = "abc";
		std::string two = "xyz";
		std::cout << "one = " << one << std::endl;
		std::cout << "two = " << two << std::endl;
		std::cout << "Calling function swap" << std::endl;
		swap(one, two);
		std::cout << "one = " << one << std::endl;
		std::cout << "two = " << two << std::endl;
	}
	std::cout << "--------MIN---------" << std::endl;
	{
		std::cout << "--------int---------" << std::endl;
		int one = 21;
		int two = 42;
		std::cout << "one = " << one << std::endl;
		std::cout << "two = " << two << std::endl;
		std::cout << "min = " << min(one, two) << std::endl;
	}
	{
		std::cout << "--------double------" << std::endl;
		double one = 21.21;
		double two = 42.42;
		std::cout << "one = " << one << std::endl;
		std::cout << "two = " << two << std::endl;
		std::cout << "min = " << min(one, two) << std::endl;
	}
	{
		std::cout << "--------char--------" << std::endl;
		char one = 'a';
		char two = 'b';
		std::cout << "one = " << one << std::endl;
		std::cout << "two = " << two << std::endl;
		std::cout << "min = " << min(one, two) << std::endl;
	}
	{
		std::cout << "--------string------" << std::endl;
		std::string one = "abc";
		std::string two = "xyz";
		std::cout << "one = " << one << std::endl;
		std::cout << "two = " << two << std::endl;
		std::cout << "min = " << min(one, two) << std::endl;
	}
	std::cout << "--------MAX---------" << std::endl;
	{
		std::cout << "--------int---------" << std::endl;
		int one = 21;
		int two = 42;
		std::cout << "one = " << one << std::endl;
		std::cout << "two = " << two << std::endl;
		std::cout << "max = " << max(one, two) << std::endl;
	}
	{
		std::cout << "--------double------" << std::endl;
		double one = 21.21;
		double two = 42.42;
		std::cout << "one = " << one << std::endl;
		std::cout << "two = " << two << std::endl;
		std::cout << "max = " << max(one, two) << std::endl;
	}
	{
		std::cout << "--------char--------" << std::endl;
		char one = 'a';
		char two = 'b';
		std::cout << "one = " << one << std::endl;
		std::cout << "two = " << two << std::endl;
		std::cout << "max = " << max(one, two) << std::endl;
	}
	{
		std::cout << "--------string------" << std::endl;
		std::string one = "abc";
		std::string two = "xyz";
		std::cout << "one = " << one << std::endl;
		std::cout << "two = " << two << std::endl;
		std::cout << "max = " << max(one, two) << std::endl;
	}
	std::cout << "--------SUBJECT-TEST---------" << std::endl;
	{
		int a = 2;
		int b = 3;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
		std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	}
}