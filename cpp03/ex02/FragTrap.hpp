#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(const FragTrap &other);
        FragTrap& operator=(const FragTrap& other);
        FragTrap(std::string name);
        void highFivesGuys(void);
        ~FragTrap();
};

#endif