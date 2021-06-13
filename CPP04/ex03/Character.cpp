#include "Character.hpp"

Character::Character(std::string name)
{
    this->_name = name;
    this->_countMaterial = 0;
    for (int i = 0; i < Character::_maxMaterials; i++)
        this->_materials[i] = nullptr;
}

Character::Character(Character const &copy)
{
    this->_name = copy._name;
    this->_countMaterial = copy._countMaterial;
    for (int i = 0; i < copy._countMaterial; i++)
    {
        this->equip(copy._materials[i]->clone());
    }
    for (int i = copy._countMaterial; i < 4; i++)
    {
        this->_materials[i] = nullptr;
    }
}

Character &Character::operator=(Character &target)
{
    this->_name = target._name;
    for (int i = 0; i < this->_countMaterial; i++)
        delete this->_materials[i];
    this->_countMaterial = target._countMaterial;
    for (int i = 0; i < target._countMaterial; i++)
    {
        this->_materials[i] = target._materials[i];
    }
    for (int i = 0; i < target._countMaterial; i++)
    {
        target._materials[i] = nullptr;
    }
    return (*this);
}

const std::string &Character::getName() const 
{
	return (this->_name);
}

void Character::use(int idx, ICharacter &target)
{
    if (this->_materials[idx] == nullptr
        || idx > this->_countMaterial || idx < 0)
        return ;
    this->_materials[idx]->use(target);
}

void Character::unequip(int idx)
{
    if (this->_materials[idx] == nullptr
        || idx > this->_countMaterial || idx < 0)
        return ;
    for (int i = idx; i < 3; i++)
    {
        this->_materials[i] = this->_materials[i + 1];
        this->_materials[i + 1] = nullptr;
    }
    this->_countMaterial--;
}

void Character::equip(AMateria *m)
{
    if (this->_countMaterial == 4 || m == nullptr || m->getType().empty())
        return ;
    for (int i = 0; i < this->_countMaterial; i++)
    {
        if (this->_materials[i] == m)
            return ;
    }
    this->_materials[_countMaterial] = m;
    _countMaterial++;
}

Character::~Character() 
{
	for (int i = 0; i < this->_countMaterial; i++)
    {
		delete this->_materials[i];
    }
}