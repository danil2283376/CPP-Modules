#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
// #include "FragTrap.hpp"
// #include "ScavTrap.hpp"

class NinjaTrap : ClapTrap
{
    public:
        NinjaTrap();
        NinjaTrap(std::string name);
        ~NinjaTrap();
        void ninjaShoebox(ClapTrap &target);
        void ninjaShoebox(FragTrap &target);
        void ninjaShoebox(ScavTrap &target);
        void ninjaShoebox(NinjaTrap &target);
        std::string getName();
    private:
        void standartNinjaTrap();
};

#endif