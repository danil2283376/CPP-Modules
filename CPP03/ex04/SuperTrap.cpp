#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const std::string &name) : ClapTrap(name),
    NinjaTrap(name), FragTrap(name)
{
    this->hitPoints = FragTrap::hitPoints;
    this->maxHitPoints = FragTrap::maxHitPoints;
    this->energyPoints = NinjaTrap::energyPoints;
    this->maxEnergyPoints = NinjaTrap::maxEnergyPoints;
    this->level = 1;
    this->name = name;
    melleAttackDamage = NinjaTrap::melleAttackDamage;
    rangedAttackDamage = FragTrap::rangedAttackDamage;
    this->armorDamageReduction = FragTrap::armorDamageReduction;
}

void SuperTrap::rangedAttack(const std::string &target) 
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(const std::string &target) 
{
	NinjaTrap::meleeAttack(target);
}

SuperTrap::~SuperTrap()
{
    std::cout << "Destructor call(SuperTrap)\n";
}