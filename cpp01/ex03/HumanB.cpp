#include "HumanB.hpp"


HumanB::HumanB(std::string name, Weapon *weapon){
    this->name = name;
}


void attack(void){
    if (weapon == NULL)
        std::cout << name << "hits with his bare fists" << std::endl;
    else
        std::cout << name << "hits with " << weapon.getType() << "to do maximum damage" << std::endl;
}