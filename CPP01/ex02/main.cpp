#include "ZombieEvent.hpp"

int main()
{
    ZombieEvent zombies;
    Zombie *zombie;

    zombie = zombies.randomChump();
    zombie->announce();
    delete zombie;
}