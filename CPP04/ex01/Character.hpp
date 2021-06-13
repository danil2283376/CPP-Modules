#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <ostream>
#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

#define WEAPON_EXIST 1
#define WEAPON_NOT_EXIST 0

class Character
{
    private:
        std::string _name;
        int _ap;
        AWeapon *_weapon;
        
    public:
        Character();
        Character(std::string const &name);
        ~Character();
        void recoverAP();
        void equip(AWeapon *weapon);
        void attack(Enemy *enemy);
        std::string getName() const;
        int getAP() const;
        std::string nameWeapon() const;
        int weaponExist() const;
};

std::ostream &operator<<(std::ostream &, Character &);

#endif