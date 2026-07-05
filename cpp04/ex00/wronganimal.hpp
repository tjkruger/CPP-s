#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>

class WAnimal{
    protected:
        std::string type;
    
    public:
        WAnimal();
        WAnimal(const WAnimal &other);
        WAnimal& operator=(const WAnimal& other);
        std::string getType() const;
        void makeSound() const;
        ~WAnimal();
};

#endif