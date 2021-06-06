#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        void kickInTheAss(std::string const &target);
        void theKissOfDeath(std::string const &target);
        void spitOil(std::string const &target);
        void vaulthunter_dot_exe(std::string const &target);
    private:
        void standartFragTrap();
};

#endif