#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "wronganimal.hpp"
#include "wrongcat.hpp"
#include "wrongdog.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    std::cout << "--- Wrong classes ---" << std::endl;

    const WAnimal* wAnimal = new WAnimal();
    const WAnimal* wCat = new WCat();
    const WAnimal* wDog = new WDog();
    wCat->makeSound();
    wDog->makeSound();
    wAnimal->makeSound();

    delete wAnimal;
    delete wCat;

    return 0;
}