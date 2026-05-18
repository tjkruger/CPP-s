#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon) {
    this->name = name;
}

void HumanA::attack(void){
    std::cout << name << " hit the other one with " << weapon.getType() << std::endl;
}