#ifndef ZOMBIEEVENT_CPP
#define ZOMBIEEVENT_CPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Zombie.hpp"

class ZombieEvent
{
    public:
                ZombieEvent();
        void    setZombieType(std::string type);
        Zombie* newZombie(std::string name);
        Zombie* randomChump();
    private:
        std::string type;
};
#endif