#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *materias[4];
        int _countMaterias;
    public:
        MateriaSource();
        void learnMateria(AMateria *material);
        AMateria *createMateria(std::string const &type);
}

#endif