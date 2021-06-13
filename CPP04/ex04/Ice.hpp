#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        AMataria *clone() const;
        void use(ICharacter &character);
};

#endif