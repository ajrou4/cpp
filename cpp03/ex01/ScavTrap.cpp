#include "ScavTrap.hpp"

ScavTrap :: ScavTrap(const std::string name): ClapTrap(name){
    std::cout << "ScavTrap " << name << " Say Hey!" << std::endl;
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
}
ScavTrap::ScavTrap(const ScavTrap &src): ClapTrap(src){
    std::cout<< "copy constructor called" <<std::endl;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &src){
    name = src.name;
    EnergyPoints =src.EnergyPoints;
    HitPoints = src.HitPoints;
    AttackDamage = src.AttackDamage;
    return(*this);
}
ScavTrap::~ScavTrap(){
    std::cout  << "ScavTrap "<< name <<" Say Goodbye !"<< std::endl;
}
void ScavTrap::guardGate(){
    std::cout<< "ScavTrap "<< name << " is now in Gate keeper mode" << std::endl;
}
 void ScavTrap::attack(const std::string& target){
    if(EnergyPoints > 0)
    {
        std::cout << "ScavTrap"<< name << "attcks  target!"<< target<< std::endl;
        EnergyPoints--;
    }
    else
        std::cout<<"ScabvTrap"<< name << "cannot attack because his e energy is left!"<<std::endl;
 }