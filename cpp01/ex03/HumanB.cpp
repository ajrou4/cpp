#include "HumanB.hpp"
#include <string>

class NWeapon;

HumanB::HumanB(const std::string& name) : _Weapon(nullptr), name(name){}
HumanB::~HumanB(){
    delete _Weapon;
}
void HumanB::attack(){
    if(_Weapon)
        std::cout << name << "attacks with their"<< _Weapon->getType() << std::endl;
    else
        std::cout<< "dose not have Weapn"<< std::endl;
}
void HumanB::setWeapon(const Weapon &NWeapon){
    if(_Weapon){
        delete _Weapon;
    }    
    _Weapon = new Weapon(NWeapon.getType()); 

}