#ifndef DOG_H
# define DOG_H

# include "animal.hpp"

class Dog : public Animal {
    private:
        Brain* brain;
    public:
        Dog();
        Dog(const Dog &other);
        Dog& operator=(const Dog &other);
        virtual void makeSound() const;
        Brain* getBrain() const;
        virtual ~Dog();
};

#endif