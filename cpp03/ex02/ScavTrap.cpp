#include "ScavTrap.hpp"

ScavTrap :: ScavTrap(const std::string name): ClapTrap(name){
    std::cout << "ScavTrap " << name << " is reday!" << std::endl;
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
}
ScavTrap::ScavTrap(const ScavTrap &src): ClapTrap(src){
    std::cout<< "copy constructor called" <<std::endl;
    *this = src;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &src){
    name = src.name;
    EnergyPoints =src.EnergyPoints;
    HitPoints = src.HitPoints;
    AttackDamage = src.AttackDamage;
    return(*this);
}

 void ScavTrap::attack(const std::string& target){
    if (HitPoints == 0)
    {
        std::cout << this->name << " cannot attack because he died" << std::endl;
        return;
    }
    if(EnergyPoints > 0){
        std::cout << "ClapTrap "<< name <<  " attacks " << target <<", causing " << AttackDamage <<  " points of damage!"<<std::endl;
        EnergyPoints--;
    }
    else{
        std::cout<< "ClapTrap "<< name <<" cannot attack because Energy Points : " << EnergyPoints << " is left" << std::endl;
    }
 }
ScavTrap::~ScavTrap(){
    std::cout  << "ScavTrap "<< name <<"is finsh !"<< std::endl;
}
void ScavTrap::guardGate(){
    std::cout<< "ScavTrap "<< name << " is now in Gate keeper mode" << std::endl;
}