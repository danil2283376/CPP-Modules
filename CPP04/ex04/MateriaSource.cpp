#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    this->_countMaterias = 0;
    for (int i = 0; i < 4; i++)
    {
        this->materias[i] = nullptr
    }
}

void MateriaSource::learnMateria(AMateria *ptr)
{
    if (ptr == NULL)
        return ;
    for (int i = 0; i < this->_countMaterias; i++)
    {
        if (this->materias[i] == nullptr)
            return ;
    }
    this->materias[this->_countMaterias] = ptr;
    this->_countMaterias++;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
    for (int i = 0; i < this->_countMaterias; i++)
    {
        if (this->materias[i]->getType == type)
        {
            return (this->materias[i]->clone());
        }
    }
    return nullptr;
}