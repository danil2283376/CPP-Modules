#include "Sorcerer.hpp"
#include "Peon.hpp"

// int main()
// {
//     Sourcerer sourcerer("Wizard", "Coward");
//     Victim victim("Lox");
//     Peon peon(victim.GetName());
//     sourcerer.polymorph(victim);
// }

void myTest()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
}

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	return 0;
}