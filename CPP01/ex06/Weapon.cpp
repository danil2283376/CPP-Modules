#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string value)
{
    this->value = value;
}

void    Weapon::setType(const std::string& value)
{
    this->value = value;
}

const   std::string& Weapon::getType()
{
    return (this->value);
}