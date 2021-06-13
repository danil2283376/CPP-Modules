#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
    public:
        RadScorpion();
        ~RadScorpion();
        // RadScorpion(int hp, std::string const &type);
        void takeDamage(int damage);
};

#endif