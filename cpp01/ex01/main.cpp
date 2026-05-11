# include "Zombie.hpp"


int main(void)
{
//    Zombie *zombie;
    Zombie *horde;

    horde = zombieHorde(5, "herbert");
    for(int i = 0; i < 5; i++)
        horde[i].announce();

//    zombie = newZombie("Herbert");
//    zombie->announce();
//    delete zombie;
    delete[] horde;
    return(1);
}