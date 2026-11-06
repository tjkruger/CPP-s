#ifndef WRONGDOG_H
# define WRONGDOG_H

# include "wronganimal.hpp"

class WDog : public WAnimal {
    public:
        WDog();
        WDog(const WDog &other);
        WDog& operator=(const WDog &other);
        void makeSound() const;
        ~WDog();
};

#endif