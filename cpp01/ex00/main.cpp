# include "Zombie.hpp"


int main(void)
{
    Zombie *zombie;

    zombie = newZombie("Herbert");
    zombie->announce();
    delete zombie;
    return(1);
}