#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap: Base constructor called!\n";
    this->name = "Clap";
    standartClapTrap();
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap: constructor(std::string name) called!\n";
    this->name = name;
    standartClapTrap();
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called!\n";
}

void ClapTrap::rangedAttack(std::string const &target)
{
    this->energyPoints -= this->rangedAttackDamage;
    if (energyPoints <= 0)
    {
        this->energyPoints = 0;
        std::cout << "The attack is impossible energy is empty!\n";
    }
    else
        std::cout << "ClapTrap " << "<" << this->name << ">"
            << "attacks" << " <" << target << ">"
               << " at range, causing <" << this->rangedAttackDamage
                    << "> points of damage!" << std::endl;
}

void ClapTrap::melleAttack(std::string const &target)
{
    this->energyPoints -= this->melleAttackDamage;
    if (energyPoints <= 0)
    {
        this->energyPoints = 0;
        std::cout << "The attack is impossible energy is empty!";
    }
    else
        std::cout << "ClapTRap " << "<" << this->name << ">"
            << "attacks" << " <" << target << ">"
                << " at melle, causing <" << this->melleAttackDamage
                    << "> points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    amount = amount * (this->armorDamageReduction / 100);
    this->hitPoints -= amount;
    std::cout << this->name << " received damage: " 
        << amount << std::endl;
    std:: cout << "Hit Points: " <<  this->hitPoints << std::endl;
    if (this->hitPoints < 0)
    {
        this->hitPoints = 0;
        std::cout << this->name << "died in attack!\n";
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "Replenishment hit point and energy points!!!\n";
    this->hitPoints += amount;
    this->energyPoints += amount;
    if (this->hitPoints > this->maxHitPoints)
    {
        this->hitPoints = this->maxHitPoints;
        std::cout << "Hit point is full!\n";
    }
    if (this->energyPoints > this->maxEnergyPoints)
    {
        this->energyPoints = this->maxEnergyPoints;
        std::cout << "Energy point is full!\n";
    }
}

void ClapTrap::standartClapTrap() 
{
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 50;
    this->maxEnergyPoints = 50;
    this->level = 1;
    this->melleAttackDamage = 20;
    this->rangedAttackDamage = 15;
    this->armorDamageReduction = 3;
}

std::string ClapTrap::getName()
{
    return (this->name);
}