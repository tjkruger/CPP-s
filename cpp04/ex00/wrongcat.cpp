#include "wrongcat.hpp"

WCat::WCat() : WAnimal() {
    type = "WCat";
    std::cout << "WCat constructor called" << std::endl;
}

WCat::WCat(const WCat &other) : WAnimal(other) {
    std::cout << "WCat copy constructor called" << std::endl;
    *this = other;
}

WCat& WCat::operator=(const WCat &other) {
    std::cout << "WCat copy assignment operator called" << std::endl;
    WAnimal::operator=(other);
    return *this;
}

void WCat::makeSound() const {
    std::cout << "long live MAO!" << std::endl;
}

WCat::~WCat() {
    std::cout << "WCat destructor called" << std::endl;
}