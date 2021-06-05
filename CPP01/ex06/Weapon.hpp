#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
    public:
        Weapon();
        Weapon(std::string value);
        void setType(const std::string& value);
        const std::string& getType();
    private:
        std::string value;
};
#endif