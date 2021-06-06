#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include "FragTrap.hpp"

class ScavTrap : FragTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
        void rangedAttack(std::string const &target);
        void melleAttack(std::string const &target);
        void airAttack(std::string const &target);
        void underGroundAttack(std::string const &target);
        void spinnerAttack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void challengeNewcomer();
    protected:
        void standartScavTrap();
};

#endif