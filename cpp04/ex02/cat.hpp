#ifndef CAT_H
# define CAT_H

# include "animal.hpp"

class Cat : public Animal {
    private:
        Brain* brain;
    public:
        Cat();
        Cat(const Cat &other);
        Cat& operator=(const Cat &other);
        virtual void makeSound() const;
        Brain* getBrain() const;
        virtual ~Cat();
};

#endif