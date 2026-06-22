#include "ClapTrap.hpp"

int main()
{
    std::string Alice = "Alice";
    ClapTrap Bob("Bob");
    int i = 0;
    while(i < 11)
    {
        Bob.attack(Alice);
        Bob.takeDamage(5);
        Bob.beRepaired(1);
        i++;
    }
    return(0);
}