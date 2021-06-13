#include "RadScorpion.hpp"

// RadScorpion::RadScorpion(int hp, std::string const &type) : Enemy(hp, type)
// {
//     std::cout << "* click click click *\n";
// }

RadScorpion::RadScorpion() : Enemy(80, "Rad Scorpion")
{
    std::cout << "* click click click *\n";
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *\n";
}

void RadScorpion::takeDamage(int damage)
{
    Enemy::takeDamage(damage);
    if (this->_hp == 0)
        RadScorpion::~RadScorpion();
}