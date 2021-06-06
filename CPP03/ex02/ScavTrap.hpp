#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
        void airAttack(std::string const &target);
        void underGroundAttack(std::string const &target);
        void spinnerAttack(std::string const &target);
        void challengeNewcomer();
    private:
        void standartScavTrap();
};

#endif