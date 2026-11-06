#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "wronganimal.hpp"

class WCat : public WAnimal {
    public:
        WCat();
        WCat(const WCat &other);
        WCat& operator=(const WCat &other);
        void makeSound() const;
        ~WCat();
};

#endif