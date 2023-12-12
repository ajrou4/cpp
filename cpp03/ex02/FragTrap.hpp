#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public :
        FragTrap(const std::string name);
        FragTrap(const FragTrap &src);
        FragTrap& operator =(const FragTrap &src);
        ~FragTrap();
        void highFivesGuys(void);
};
#endif