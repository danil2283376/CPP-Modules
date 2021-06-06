#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
    public:
        NinjaTrap();
        NinjaTrap(std::string name);
        ~NinjaTrap();
        void ninjaShoebox(ClapTrap &target);
        void ninjaShoebox(FragTrap &target);
        void ninjaShoebox(ScavTrap &target);
        void ninjaShoebox(NinjaTrap &target);
        void rangedAttack(std::string const & target);
	    void meleeAttack(std::string const & target);
        std::string getName();
    private:
        void standartNinjaTrap();
        void OutputInfoAttack(std::string name);
};

#endif