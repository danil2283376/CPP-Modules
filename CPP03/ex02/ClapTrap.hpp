#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>
#include <time.h>
#include <stdlib.h>

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        void rangedAttack(std::string const &target);
        void melleAttack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    protected:
        long hitPoints;
        long maxHitPoints;
        long energyPoints;
        long maxEnergyPoints;
        int level;
        std::string name;
        long melleAttackDamage;
        long rangedAttackDamage;
        long armorDamageReduction;
    private:
        void standartClapTrap();
};

#endif