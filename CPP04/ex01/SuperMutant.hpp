#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
    public:
        ~SuperMutant();
        SuperMutant();
        // SuperMutant(int hp, std::string const &type);
        void takeDamage(int damage);

};

#endif