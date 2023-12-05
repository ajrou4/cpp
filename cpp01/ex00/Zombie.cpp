#include "Zombie.hpp"
#include <iostream>

Zombie:: Zombie(std:: string name)
{
	this->name= name;
	return;
}
Zombie :: ~Zombie(void){
	std::cout<<"Zombie "<< name << " destroyed." <<std::endl;
	return ;
}

void Zombie :: announce(void){
	// static std::string name;
	std :: cout << name << ": BraiiiiiiinnnzzzZ..."<< std:: endl;
}
