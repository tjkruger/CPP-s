#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    hp = 100;
    energy = 50;
    dmg = 20;
    std::cout <<  name << " was successfully created" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(hp == 0 || energy == 0)
    {
        std::cout << name << " has no sufficient energy/hp left to attack" << std::endl;
        return;
    }

    std::cout << target << " was hit by " << name << " with an attack for " << dmg << " damage" << std::endl;
    energy = energy - 1;
}

void ScavTrap::guardGate(void)
{
    std::cout << name << " is now in guard gate mode" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << name << " was successfully deconstructed as ScavTrap obj" << std::endl;
}