#include "Character.hpp"

Character::Character()
{
    this->_name = "Player";
    this->_ap = 40;
    this->_weapon = NULL;
}

Character::Character(std::string const &name)
{
    this->_name = name;
    this->_ap = 40;
    this->_weapon = NULL;
}

Character::~Character()
{

}

std::string Character::getName() const
{
    return (this->_name);
}

int Character::getAP() const
{
    return (this->_ap);
}

int Character::weaponExist() const
{
    if (this->_weapon == NULL)
        return WEAPON_NOT_EXIST;
    return WEAPON_EXIST;
}

std::string Character::nameWeapon() const
{
    return (this->_weapon->getName());
}

void Character::recoverAP()
{
    this->_ap += 10;
}

void Character::attack(Enemy *enemy)
{
    if (enemy->getHP() == 0)
        return ;
    if (_weapon && (this->_ap - this->_weapon->getAPCost()) >= 0)
    {
        std::cout << this->_name << " attacks " << enemy->getType()
            << " with a " << this->_weapon->getName() << std::endl;
        this->_weapon->attack();
        enemy->takeDamage(this->_weapon->getDamage());
        if (enemy->getHP() == 0)
            delete enemy;
        this->_ap -= _weapon->getAPCost();
    }
}

void Character::equip(AWeapon *weapon)
{
    this->_weapon = weapon;
}

std::ostream &operator<<(std::ostream &fout, Character &character)
{
    fout << character.getName() << " has " << character.getAP() << " AP and ";
    if (character.weaponExist() == WEAPON_EXIST)
    {
        fout << "wields a " << character.nameWeapon();
    }
    else
        fout << "is unarmed";
    fout << std::endl;
    return (fout);
}