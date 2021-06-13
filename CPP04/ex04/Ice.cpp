#include "Ice.hpp"

Ice::Ice() : AMateria("Ice")
{
}

AMateria *Ice::clone() const
{
    Ice *copy = new Ice(*this);
    return (copy);
}

void Ice::use(ICharacter &character)
{
    std::cout << "* shoots an ice bolt at " << character.getName() << " *\n";
    AMateria::use(character);
}