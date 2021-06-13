#include "Cure.hpp"

Cure::Cure() : AMateria("Cure")
{

}

AMateria *Cure::clone(ICharacter &character) const
{
    std::cout << "* heals " << character.getName() << "s wounds *\n";
    AMateria::use(character);
}