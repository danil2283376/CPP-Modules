#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
    // _name = "Power Fist";
    // _damage = 50;
    // _apcost = 8;
}

void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *\n";
}