#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
        private:
                std::string name;
                unsigned int  HitPoints;
                unsigned int  EnergyPoints;
                unsigned int  AttackDamage;
        public:
          
                ClapTrap(const std::string &name);
                ~ClapTrap();
                ClapTrap(const ClapTrap &src);
                ClapTrap& operator = (const ClapTrap &src); 
                void attack(const std::string& target);
                void takeDamage(unsigned int amount);
                void beRepaired(unsigned int amount);
                void desplayInfo(void);

};


#endif