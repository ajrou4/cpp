#include "ScavTrap.hpp"

ScavTrap :: ScavTrap(const std::string name): ClapTrap(name){
    std::cout << "ScavTrap " << name << " is reday!" << std::endl;
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
}
ScavTrap::~ScavTrap(){
    std::cout  << "ScavTrap "<< name <<"is finsh !"<< std::endl;
}
void ScavTrap::guardGate(){
    std::cout<< "ScavTrap "<< name << " is now in Gate keeper mode" << std::endl;
}