#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    this->_count = 0;
    for (int i = 0; i < 4; i++)
    {
        this->materials[i] = nullptr;
    }
}

void MateriaSource::learnMateria(AMateria *ptr)
{
    if (_count >= 4 || ptr == nullptr)
        return ;
    for (int i = 0; i < _count; i++)
        if (this->materials[i] == ptr)
            return ;
    this->materials[this->_count] = ptr;
    _count++;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
    for (int i = 0; i < this->_count; i++)
    {
        if (this->materials[i]->getType() == type)
        {
            AMateria *a = this->materials[i]->clone();
            return (a);
        }
    }
    return (nullptr);
}