#include "HumanA.hpp"

void HumanA::attack() const{
std::cout << name << " attacks with their " << _Weapon.getType() << std::endl;
}