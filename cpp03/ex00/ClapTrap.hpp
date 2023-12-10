#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class CalpTrap
{
    private:
                std::string name;
    public:
           CalpTrap();
           ~CalpTrap();
           void attack(const std::string& target);
           void takeDamage(unsigned int amount);
           void beRepaired(unsigned int amount);

};


#endif