#include "Character.hpp"

Character::Character(std::string name)
{
    this->_name = name;
    this->_count = 0;
    for (int i = 0; i < Character::maxMaterials; i++)
    {
        this->_materials[i] = nullptr;
    }
}

std::string Character::getName()
{
    return (this->_name);
}

void Character::use(int idx, ICharacter &target)
{
    if (this->_materials[idx] == nullptr || idx > this->_count || idx < 0)
        return ;
    this->_materials[idx]->use(target);
}

void Character::unequip(int idx)
{
    if (this->_materials[idx] == nullptr || 
        idx > this->_count || idx < 0)
        return ;
    for (int i = 0; i < 3; i++)
    {
        this->_materials[i] = this->_materials[i + 1];
        this->_materials[i + 1] = nullptr;
    }
    this->_count--;
}

Character::~Character()
{
    for (int i = 0; i < this->_count; i++)
    {
        delete this->_materials[i];
    }
}

