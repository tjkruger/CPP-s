#ifndef DOG_H
# define DOG_H

# include "animal.hpp"

class Dog : public Animal {
    public:
        Dog();
        Dog(const Dog &other);
        Dog& operator=(const Dog &other);
        virtual void makeSound() const;
        virtual ~Dog();
};

#endif