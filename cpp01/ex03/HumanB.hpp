#ifndef HUMANB_HPP
#define HUMANB_HPP

#include"Weapon.hpp"
#include <string>
 class HumanB
{
private:
        Weapon *_Weapon;
        std::string name;
public:
        HumanB(const std::string &name);
        ~HumanB();
        void attack();
        void setWeapon(const Weapon &NWeapon);
};

#endif