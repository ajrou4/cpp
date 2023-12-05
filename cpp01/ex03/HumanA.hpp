#ifndef HUMANA_HPP
#define HUMANA_HPP

#include"Weapon.hpp"
#include <string>

class HumanA{
private:
      Weapon& _Weapon;
        std::string name;
public:
        HumanA(const std::string name, Weapon& we) :  _Weapon(we), name(name) {}
        void attack() const;
};

#endif
