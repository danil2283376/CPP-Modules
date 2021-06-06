#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include <time.h>
#include <stdlib.h>

class FragTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        void rangedAttack(std::string const &target);
        void melleAttack(std::string const &target);
        void kickInTheAss(std::string const &target);
        void theKissOfDeath(std::string const &target);
        void spitOil(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void vaulthunter_dot_exe(std::string const &target);
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
        void standartFragTrap();
};

#endif