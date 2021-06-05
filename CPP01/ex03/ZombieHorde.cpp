#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
    this->n = N;
    std::string *array = new std::string[8];
    array[0] = "Max";
    array[1] = "Danil";
    array[2] = "Senya";
    array[3] = "Egor";
    array[4] = "Violeta";
    array[5] = "Fanis";
    array[6] = "Gigavatt";
    array[7] = "Destroer";
    srand(time(NULL));
    this->array = new Zombie*[N];
    for (int i = 0; i < N; i++)
    {
        this->array[i] = newZombie(array[rand() % 7]);
    }
}

Zombie    *ZombieHorde::newZombie(std::string name)
{
    Zombie *zombie = new Zombie(name, "NightStalker");
    return (zombie);
}

void       ZombieHorde::AnnonceZombies()
{
    for (int i = 0; i < this->n; i++)
    {
        this->array[i]->announce();
    }
}

ZombieHorde::~ZombieHorde()
{
    for (int i = 0; i < this->n; i++)
    {
        delete array[i];
    }
    delete[] array;
}