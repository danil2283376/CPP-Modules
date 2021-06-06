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
        std::cout << (this->name) << " " << challenge[rand() % 2] << std::endl;
    }
}