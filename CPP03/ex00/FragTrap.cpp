#include "FragTrap.hpp"

typedef void (FragTrap::* funcsAttaks)(std::string const &target);

FragTrap::FragTrap()
{
    std::cout << "Base constructor called!\n";
    this->name = "Robot";
    standartFragTrap();
}

FragTrap::FragTrap(std::string name) : name(name)
{
    std::cout << "Constructor(std::string name) called!\n";
    standartFragTrap();
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void FragTrap::standartFragTrap()
{
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 100;
    this->maxEnergyPoints = 100;
    this->level = 1;
    this->melleAttackDamage = 30;
    this->rangedAttackDamage = 20;
    this->armorDamageReduction = 5;
}

void FragTrap::rangedAttack(std::string const &target) 
{
    this->energyPoints -= this->rangedAttackDamage;
    if (energyPoints <= 0)
    {
        this->energyPoints = 0;
        std::cout << "The attack is impossible energy is empty!\n";
    }
    else
        std::cout << "FR4G " << "<" << this->name << ">"
            << "attacks" << " <" << target << ">"
               << " at range, causing <" << this->rangedAttackDamage
                    << "> points of damage!" << std::endl;
}

void FragTrap::melleAttack(std::string const &target)
{
    this->energyPoints -= this->melleAttackDamage;
    if (energyPoints <= 0)
    {
        this->energyPoints = 0;
        std::cout << "The attack is impossible energy is empty!";
    }
    else
        std::cout << "FR4G " << "<" << this->name << ">"
            << "attacks" << " <" << target << ">"
                << " at melle, causing <" << this->melleAttackDamage
                    << "> points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) 
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

void FragTrap::beRepaired(unsigned int amount) 
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

void FragTrap::kickInTheAss(std::string const &target)
{
    this->energyPoints -= this->melleAttackDamage;
    if (energyPoints <= 0)
    {
        this->energyPoints = 0;
        std::cout << "The attack is impossible energy is empty!\n";
    }
    else
        std::cout << "FR4G " << "<" << this->name << ">"
            << "attacks" << " <" << target << ">"
               << " at melle Kick In The Ass, causing <" << this->melleAttackDamage
                    << "> points of damage!" << std::endl;
}

void FragTrap::theKissOfDeath(std::string const &target) 
{
    this->energyPoints -= this->rangedAttackDamage;
    if (energyPoints <= 0)
    {
        this->energyPoints = 0;
        std::cout << "The attack is impossible energy is empty!\n";
    }
    else
        std::cout << "FR4G " << "<" << this->name << ">"
            << "attacks" << " <" << target << ">"
               << " at range The Kiss Of Death, causing <" << this->rangedAttackDamage
                    << "> points of damage!" << std::endl;
}

void FragTrap::spitOil(std::string const &target) 
{
    this->energyPoints -= this->rangedAttackDamage;
    if (energyPoints <= 0)
    {
        this->energyPoints = 0;
        std::cout << "The attack is impossible energy is empty!\n";
    }
    else
        std::cout << "FR4G " << "<" << this->name << ">"
            << "attacks" << " <" << target << ">"
               << " at range Spit Oil, causing <" << this->rangedAttackDamage
                    << "> points of damage!" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    funcsAttaks array[5] = 
    {
        array[0] = &FragTrap::melleAttack,
        array[1] = &FragTrap::rangedAttack,
        array[2] = &FragTrap::kickInTheAss,
        array[3] = &FragTrap::theKissOfDeath,
        array[4] = &FragTrap::spitOil 
    };
    this->energyPoints -= 20;
    if (this->energyPoints < 0)
    {
        this->energyPoints = 0;
        std::cout << "The attack is impossible energy is empty!\n";
    }
    srand(time(NULL));
    (this->*array[rand() % 5])(target);
}