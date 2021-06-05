#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
// #include "ZombieEvent.hpp"
#include <iostream>
#include <string>

class Zombie
{
    public:
        Zombie();
        Zombie(std::string name, std::string type);
        void    announce();
        
    private:
        std::string name;
        std::string type;
};

#endif