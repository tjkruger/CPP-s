#ifndef CAT_H
# define CAT_H

# include "animal.hpp"

class Cat : public Animal {
    public:
        Cat();
        Cat(const Cat &other);
        Cat& operator=(const Cat &other);
        virtual void makeSound() const;
        virtual ~Cat();
};

#endif