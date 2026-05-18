#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include "Weapon.hpp"


class HumanB{
    private:
        std::string name;
        
    public:
        HumanB(std::string name);
        void attack(void);
    

};


#endif