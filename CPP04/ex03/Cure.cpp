#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{

}

AMateria *Cure::clone() const
{
    Cure *clone = new Cure(*this);
    return (clone);
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *\n";
    AMateria::use(target);
}