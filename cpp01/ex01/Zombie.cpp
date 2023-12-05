#include "Zombie.hpp"
Zombie :: Zombie(): name(""){
	//std::cout << "hi" << std::endl;	
}
Zombie::Zombie(std::string name): name(name){
}
void Zombie :: setName(std:: string tname)
{
	name = tname;
}
Zombie :: ~Zombie(void){
	std::cout<<"Zombie "<< name << " destroyed." <<std::endl;
}

void Zombie :: announce(void)const{
	std :: cout << name << ": BraiiiiiiinnnzzzZ..."<< std:: endl;
}
