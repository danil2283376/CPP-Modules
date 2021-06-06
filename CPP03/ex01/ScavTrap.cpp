#include "ScavTrap.hpp"

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called!\n";
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap(std::string name) constructor called!\n";
    this->name = name;
    ScavTrap::standartScavTrap();
}

ScavTrap::ScavTrap() 
{
    this->name = "Serena";
    ScavTrap::standartScavTrap();
}

void ScavTrap::standartScavTrap()
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

void ScavTrap::rangedAttack(std::string const &target) 
{
    this->energyPoints -= this->rangedAttackDamage;
    if (energyPoints <= 0)
    {
        this->energyPoints = 0;
        std::cout << "Serena: The attack is impossible energy is empty!\n";
    }
    else
        std::cout << "Serena " << "<" << this->name << ">"
            << "attacks" << " <" << target << ">"
               << " at range, causing <" << this->rangedAttackDamage
                    << "> points of damage!" << std::endl;
}

void ScavTrap::melleAttack(std::string const &target)
{
    this->energyPoints -= this->melleAttackDamage;
    if (energyPoints <= 0)
    {
        this->energyPoints = 0;
        std::cout << "The attack is impossible energy is empty!";
    }
    else
        std::cout << "Serena " << "<" << this->name << ">"
            << "attacks" << " <" << target << ">"
                << " at melle, causing <" << this->melleAttackDamage
                    << "> points of damage!" << std::endl;
}

void ScavTrap::airAttack(std::string const &target)
{
    this->energyPoints -= this->rangedAttackDamage;
    if (energyPoints <= 0)
    {
        this->energyPoints = 0;
        std::cout << "The attack is impossible energy is empty!";
    }
    else
        std::cout << "Serena " << "<" << this->name << ">"
            << "attacks" << " <" << target << ">"
                << " at range air attack, causing <" << this->melleAttackDamage
                    << "> points of damage!" << std::endl;
}

void ScavTrap::underGroundAttack(std::string const &target)
{
    this->energyPoints -= this->melleAttackDamage;
    if (energyPoints <= 0)
    {
        this->energyPoints = 0;
        std::cout << "Serena: The attack is impossible energy is empty!";
    }
    else
        std::cout << "Serena " << "<" << this->name << ">"
            << "attacks" << " <" << target << ">"
                << " at melle underground attack, causing <" << this->melleAttackDamage
                    << "> points of damage!" << std::endl;
}

void ScavTrap::spinnerAttack(std::string const &target)
{
    this->energyPoints -= this->melleAttackDamage;
    if (energyPoints <= 0)
    {
        this->energyPoints = 0;
        std::cout << "Serena: The attack is impossible energy is empty!";
    }
    else
        std::cout << "Serena " << "<" << this->name << ">"
            << "attacks" << " <" << target << ">"
                << " at melle spinner attack, causing <" << this->melleAttackDamage
                    << "> points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    amount = amount * (this->armorDamageReduction / 100);
    this->hitPoints -= amount;
    std::cout << this->name << " received damage: " 
        << amount << std::endl;
    std:: cout << "Serena Hit Points: " <<  this->hitPoints << std::endl;
    if (this->hitPoints < 0)
    {
        this->hitPoints = 0;
        std::cout << this->name << "died in attack!\n";
    }
}

void ScavTrap::beRepaired(unsigned int amount)
{
    std::cout << "Serena: Replenishment hit point and energy points!!!\n";
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

void ScavTrap::challengeNewcomer() 
{
    std::string *challenge = new std::string[3];
    challenge[0] = "I call to fight in the cave";
    challenge[1] = "I challenge you to a friendly duel";
    challenge[2] = "I challenge you to test my skills in a street fight";
    this->energyPoints -= 20;
    if (this->energyPoints < 0)
    {
        this->energyPoints = 0;
        std::cout << "The attack is impossible energy is empty!\n";
    }
    else 
    {
        srand(time(NULL));
        std::cout << (this->name) << " " << challenge[rand() % 3] << std::endl;
    }
}