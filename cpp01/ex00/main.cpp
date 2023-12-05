#include "Zombie.hpp"
#include <iostream>
#include <cstdlib>

int main(){
	Zombie  sZombie("majrou");
	sZombie.announce();

	Zombie* hZombie = newZombie("KhderKrawita");
	hZombie->announce();

	randomChump("jamica");
	delete hZombie;
	return 0;
}

