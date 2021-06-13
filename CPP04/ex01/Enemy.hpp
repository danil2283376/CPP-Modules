#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy
{
    protected:
        int _hp;
        std::string _type;
        // Enemy &operator=(Enemy const &enemy);
    public:
        Enemy(int hp, std::string const &type);
        ~Enemy();
        std::string getType() const;
        int getHP() const;

        virtual void takeDamage(int damage);
};

#endif