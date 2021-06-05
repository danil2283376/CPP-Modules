#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

class ZombieHorde
{
    public:
        ZombieHorde(int N);
        void      AnnonceZombies();
        ~ZombieHorde();
    private:
        Zombie **array;
        int n;
        Zombie    *newZombie(std::string);
};

#endif