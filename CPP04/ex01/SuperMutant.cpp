#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

// SuperMutant::SuperMutant(int hp, std::string const &type) : Enemy(hp, type)
// {
//     std::cout << "Gaaah. Me want smash heads!\n";
// }

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh...\n";
}

void SuperMutant::takeDamage(int damage)
{
    damage -= 3;
    Enemy::takeDamage(damage);
}