#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap Bob("Bob");
    ScavTrap Alice("Alice");
    FragTrap Chad("Chad");

    Bob.attack("Alice");
    Alice.attack("Bob");
    Alice.guardGate();
    Chad.attack("Bob");
    Chad.highFivesGuys();
    Chad.takeDamage(50);
    Chad.beRepaired(20);

    return 0;
}