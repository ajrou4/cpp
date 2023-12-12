#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string name):ClapTrap(name){
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "FragTrap "<< name << " Say hey!"<<std::endl;
}
FragTrap::~FragTrap(){
    std::cout<< "FragTrap "<< name << " Say Goodbye" <<std::endl;
}

FragTrap::FragTrap(const FragTrap &src): ClapTrap(src){
    std::cout << "Copy constructor called"<< std::endl;
}
FragTrap &FragTrap::operator=(const FragTrap &src){
    name = src.name;
    EnergyPoints = src.EnergyPoints;
    HitPoints = src.HitPoints;
    AttackDamage = src.AttackDamage;

}
void FragTrap::highFivesGuys(void){
    std::cout<< "positive high fives request on the standard output"<< std::endl;
}