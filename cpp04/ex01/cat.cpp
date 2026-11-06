#include "cat.hpp"

Cat::Cat() : Animal() {
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
    std::cout << "Cat copy constructor called" << std::endl;
    brain = new Brain(*other.brain);
    *this = other;
}

Cat& Cat::operator=(const Cat &other) {
    std::cout << "Cat copy assignment operator called" << std::endl;
    Animal::operator=(other);
    *brain = *other.brain;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "long live MAO!" << std::endl;
}

Cat::~Cat() {
    delete brain;
    std::cout << "Cat destructor called" << std::endl;
}

Brain* Cat::getBrain() const {
    return brain;
}