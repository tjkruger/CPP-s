#include "wronganimal.hpp"

WAnimal::WAnimal() : type("WAnimal") {
	std::cout << "WAnimal default constructor called" << std::endl;
}

WAnimal::WAnimal(const WAnimal &other) {
	std::cout << "WAnimal copy constructor called" << std::endl;
	*this = other;
}

WAnimal& WAnimal::operator=(const WAnimal &other) {
	std::cout << "WAnimal copy assignment operator called" << std::endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

std::string WAnimal::getType() const {
	return (type);
}

void WAnimal::makeSound() const {
	std::cout << "* generic Wanimal sound *" << std::endl;
}

WAnimal::~WAnimal() {
	std::cout << "WAnimal destructor called" << std::endl;
}