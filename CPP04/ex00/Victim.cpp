#include "Victim.hpp"

Victim::Victim(std::string name)
{
    this->name = name;
    std::cout << "Some random victim called " << name << " just appered!\n";
}

Victim::~Victim()
{
    std::cout << "Victim " << this->name << " just died for no apparent reason!\n";
}

void Victim::getPolymorphed() const
{
    std::cout << this->name << " has been turned into a cute little sheep!\n";
}

std::string Victim::GetName() const
{
    return (this->name);
}

std::ostream &operator<<(std::ostream &fout, Victim &copy)
{
    fout << "I'm " << copy.GetName() << " and I like otters!" << std::endl;
    return (fout);
}