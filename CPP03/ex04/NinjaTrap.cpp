#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
    this->name = "Ninja";
    standartNinjaTrap();
    std::cout << "Base constructor called!\n";
}

NinjaTrap::NinjaTrap(std::string name) 
{
    this->name = name;
    standartNinjaTrap();
    std::cout << "Constructor(std::string name) called!\n";
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "Destructor called!\n";
}

void NinjaTrap::standartNinjaTrap()
{
    this->hitPoints = 60;
    this->maxHitPoints = 60;
    this->energyPoints = 120;
    this->maxEnergyPoints = 120;
    this->level = 1;
    this->melleAttackDamage = 60;
    this->rangedAttackDamage = 5;
    this->armorDamageReduction = 0;
}

void NinjaTrap::meleeAttack(const std::string &target)
{
    std::cout << "NinjaTrap " << name << " attacks " << target << " at melee, causing " << melleAttackDamage << " damage!\n";
}

void NinjaTrap::rangedAttack(const std::string &target)
{
    std::cout << "NinjaTrap " << name << " attacks " << target << " at range, causing " << rangedAttackDamage << " damage!\n";
}

void NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
    // std::cout << target.getName() << std::endl;
    OutputInfoAttack(target.getName());
}

void NinjaTrap::ninjaShoebox(ClapTrap &target)
{
    // std::cout << target.getName() << std::endl;
    OutputInfoAttack(target.getName());
}

void NinjaTrap::ninjaShoebox(FragTrap &target)
{
    // std::cout << target.getName() << std::endl;
    OutputInfoAttack(target.getName());
}

void NinjaTrap::ninjaShoebox(ScavTrap &target)
{
    // std::cout << target.getName() << std::endl;
    OutputInfoAttack(target.getName());
}

void NinjaTrap::OutputInfoAttack(std::string name)
{
    std::cout << this->name << " attack -> " << name << std::endl;
}

std::string NinjaTrap::getName()
{
    return (this->name);
}