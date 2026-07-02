#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap Bob("Bob");
    ScavTrap Alice("Alice");

    Bob.attack("Alice");
    Alice.attack("Bob");
    Alice.guardGate();
    Alice.takeDamage(50);
    Alice.beRepaired(20);

    return 0;
}