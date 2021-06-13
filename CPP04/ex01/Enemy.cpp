#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type)
{
    _hp = hp;
    _type = type;
}

std::string Enemy::getType() const
{
    return (this->_type);
}

int Enemy::getHP() const
{
    return (this->_hp);
}

// Enemy & Enemy::operator=(const Enemy &enemy)
// {
//     this->_hp = enemy._hp;
//     this->_type = enemy._type;
//     return (*this);
// }

Enemy::~Enemy()
{
    
}

void Enemy::takeDamage(int damage)
{
    _hp -= damage;
    if (_hp <= 0)
        _hp = 0;
}