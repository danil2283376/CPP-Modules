#ifndef SORCERER_HPP
#define SORCERER_HPP

#include "Victim.hpp"
#include <iostream>

class Sorcerer
{
    private:
        std::string name;
        std::string title;
    public:
        Sorcerer(std::string name, std::string title);
        ~Sorcerer();
        std::string GetName();
        std::string GetTitle();
        void polymorph(Victim const &) const;
};

std::ostream &operator<<(std::ostream &, Sorcerer &);

#endif