#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() 
{
    this->type = "NightStalker";
}

Zombie       *ZombieEvent::newZombie(std::string name)
{
    Zombie *a = new Zombie(name, this->type);
    return (a);
}

void         ZombieEvent::setZombieType(std::string type) 
{
    this->type = type;
}

Zombie       *ZombieEvent::randomChump()
{
    Zombie *zombie;
    int randomName;
    std::string *array = new std::string[8];
    array[0] = "Max";
    array[1] = "Destroer";
    array[2] = "Senya";
    array[3] = "Egor";
    array[4] = "Violeta";
    array[5] = "Fanis";
    array[6] = "Gigavatt";
    array[7] = "Danil";
    srand(time(NULL));
    randomName = rand() % 8;
    zombie = newZombie(array[randomName]);
    return (zombie);
}