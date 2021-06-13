#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        int _count;
        AMateria *materials[4];
    public:
        MateriaSource();
        void learnMateria(AMateria *ptr);
        AMateria *createMateria(std::string const &type);
};

#endif