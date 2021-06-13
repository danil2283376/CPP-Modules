#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
    this->name = name;
    this->title = title;
    std::cout << name << ", " << title << ", " << "is born!\n";
}

Sorcerer::~Sorcerer()
{
    std::cout << name << ", " << title << ", " << "is dead.\n";
}

std::string Sorcerer::GetName()
{
    return (this->name);
}

std::string Sorcerer::GetTitle()
{
    return (this->title);
}

void Sorcerer::polymorph(Victim const &copy) const
{
    copy.getPolymorphed();
}

std::ostream &operator<<(std::ostream &fout, Sorcerer &copy)
{
    fout << "I am " << copy.GetName() << ", " << copy.GetTitle() << ", " << "and i like ponies!\n";
    return (fout);
}