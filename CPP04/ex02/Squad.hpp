#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{
    private:
        int _count;
        ISpaceMarine **_array;
    public:
        Squad();
        ~Squad();
        int getCount() const;
        ISpaceMarine *getUnit(int index) const;
        int push(ISpaceMarine *iSpaceMarine);
};

#endif