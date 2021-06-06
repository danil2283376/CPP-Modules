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
        virtual void rangedAttack(std::string const &target);
        virtual void melleAttack(std::string const &target);
        virtual void takeDamage(unsigned int amount);
        virtual void beRepaired(unsigned int amount);
        std::string getName();
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