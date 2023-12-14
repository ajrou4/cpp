#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public :
        ScavTrap(const std::string name);
        ScavTrap(const ScavTrap &src);
        ScavTrap& operator = (const ScavTrap &src);
        void ScavTrap::attack(const std::string& target);
        ~ScavTrap();
        void guardGate();
};
#endif