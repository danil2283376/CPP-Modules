#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}

AMateria *Ice::clone() const 
{
    Ice *clone = new Ice(*this);
    return (clone);
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
	AMateria::use(target);
}