#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::HumanB(std::string name, Weapon weapon)
    : name(name), weapon(weapon)
{
    
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = weapon;
}

void HumanB::attack()
{
    std::cout << name << " attacks: " << weapon.getType() << std::endl;
}