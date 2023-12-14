#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name): name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0){
    std::cout << "ClapTrap "<<name<<" Say Hello!"<< std::endl;
}
ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap "<<name<<" Say Goodbye!"<< std::endl;
}
ClapTrap :: ClapTrap(const ClapTrap &src){
    std::cout << "Copy constructor called"<< std::endl;
    *this = src;
}
ClapTrap &ClapTrap:: operator=(const ClapTrap &src){
    name = src.name;
    HitPoints = src.HitPoints;
    EnergyPoints = src.EnergyPoints;
    AttackDamage = src.AttackDamage;
    return *this; 
}
void ClapTrap::attack(const std::string& target){
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
void ClapTrap::takeDamage(unsigned int amount){
    if (HitPoints <= amount)
    {
        std::cout << this->name << " Died" << std::endl;
        HitPoints = 0;
        return;
    }
    HitPoints -= amount;
    std::cout << "Clap Trap " << name << " take "<< amount << " point of damge!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount){
    if (HitPoints == 0)
    {
        std::cout << this->name << " cannot repair himself because he died" << std::endl;
        return;
    }
    if(EnergyPoints > 0){
    if (HitPoints + amount >= 10)
        HitPoints = 10;
    else
        HitPoints += amount;
        std::cout << "ClapTrap " << name << " repairs itself for " << amount << " point!"<<std::endl;
        EnergyPoints--;
    }
    else{
        std::cout << "ClapTrap "<<name << " cannot repairs it self because has no energy points left!" << std::endl;
    }
}

void ClapTrap::desplayInfo(){
    std::cout << "this last update : " <<std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "HitPoints: " << HitPoints << std::endl;
    std::cout << "EnergyPoints: " << EnergyPoints << std::endl;
    std::cout << "AttackDamage: " << AttackDamage << std::endl;}