#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
    public:
        ~Peon();
        Peon(std::string name);
        void getPolymorphed() const;
};

#endif