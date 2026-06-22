#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    hp = 10;
    energy = 10;
    dmg = 0;
    std::cout <<  name << " was successfully created" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(hp == 0 || energy == 0)
    {
        std::cout << name << " has no sufficient energy/hp left to attack" << std::endl;
        return;
    }

    std::cout << target << " was hit by " << name << " with an attack for " << dmg << " damage" << std::endl;
    energy = energy - 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount > hp)
        hp = 0;
    else
        hp = hp - amount;

    std::cout << name << " was hit by something for " << amount << " of damage and has "<< hp << " left." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(hp == 0 || energy == 0)
    {
        std::cout << name << " has no sufficient energy/hp left to be repaired" << std::endl;
        return;
    }

    hp += amount;
    energy -= 1;
    std::cout << name << " was repaird for " << amount << " and has now " << hp << " left" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << name << " was successfully deconstructed" << std::endl;
}