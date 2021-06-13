#include <iostream>
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

void    notWeapon() 
{
    std::cout << "\n";
	Character player("Player");

	std::cout << player;
	SuperMutant superMutant;

	player.attack(&superMutant);
	std::cout << player;
	player.attack(&superMutant);
	std::cout << player;
	player.attack(&superMutant);
	std::cout << player;
	player.attack(&superMutant);
}

int main()
{
    Character* me = new Character("me");

    std::cout << *me;

    Enemy* b = new RadScorpion();

    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();

    me->equip(pr);
    std::cout << *me;
    me->equip(pf);

    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    notWeapon();
    return (0);
}