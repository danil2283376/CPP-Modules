#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name, std::string type)
    : name(name), type(type)
{
}

void Zombie::announce()
{
    std::cout << "<" << this->name << ">"
        << "(" << this->type << ")" << "Braiiiiinnnss..." << std::endl;
}