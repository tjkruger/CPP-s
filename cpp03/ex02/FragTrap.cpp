#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    ClapTrap::operator=(other);
    return *this;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    hp = 100;
    energy = 100;
    dmg = 30;
    std::cout <<  name << " was successfully created" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << name << " gives a hig five" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << name << " was successfully deconstructed as FragTrap obj" << std::endl;
}