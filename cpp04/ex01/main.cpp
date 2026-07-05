#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "Brain.hpp"

int main()
{
    Animal* animals[10];
    for (int i = 0; i < 5; i++)
        animals[i] = new Dog();
    for (int i = 5; i < 10; i++)
        animals[i] = new Cat();

    for (int i = 0; i < 10; i++)
        delete animals[i];

    Dog dog1;
    Dog dog2(dog1);
    dog1.getBrain()->setIdea(0, "I want to eat");
    std::cout << "Dog1 idea: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog2 idea: " << dog2.getBrain()->getIdea(0) << std::endl;

    return 0;
}