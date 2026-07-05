#include "wrongdog.hpp"

WDog::WDog() : WAnimal() {
    type = "WDog";
    std::cout << "WDog constructor called" << std::endl;
}

WDog::WDog(const WDog &other) : WAnimal(other) {
    std::cout << "WDog copy constructor called" << std::endl;
    *this = other;
}

WDog& WDog::operator=(const WDog &other) {
    std::cout << "WDog copy assignment operator called" << std::endl;
    WAnimal::operator=(other);
    return *this;
}

void WDog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}

WDog::~WDog() {
    std::cout << "WDog destructor called" << std::endl;
}