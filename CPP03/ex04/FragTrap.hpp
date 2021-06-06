#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        void kickInTheAss(std::string const &target);
        void theKissOfDeath(std::string const &target);
        void spitOil(std::string const &target);
        void vaulthunter_dot_exe(std::string const &target);
        std::string getName();
        void rangedAttack(std::string const & target);
	    void meleeAttack(std::string const & target);
    private:
        void standartFragTrap();
        static std::string pullAttack[];
};

#endif