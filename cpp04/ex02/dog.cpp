#include "dog.hpp"

Dog::Dog() : Animal() {
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
    std::cout << "Dog copy constructor called" << std::endl;
    brain = new Brain(*other.brain);
    *this = other;
}

Dog& Dog::operator=(const Dog &other) {
    std::cout << "Dog copy assignment operator called" << std::endl;
    Animal::operator=(other);
    *brain = *other.brain;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

Brain* Dog::getBrain() const {
    return brain;
}