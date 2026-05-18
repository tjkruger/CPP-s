
#include "HumanB.hpp"


HumanB::HumanB(std::string name){
    this->name = name;
    this->weapon = NULL;
}

void HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}


void HumanB::attack(void){
    if (weapon == NULL)
        std::cout << name << " hits with his bare fists" << std::endl;
    else
        std::cout << name << " hits with " << weapon->getType() << "to do maximum damage" << std::endl;
}