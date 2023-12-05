#include "Zombie.hpp"

int main()
{
	Zombie* Azombie = zombieHorde(10, "majrou");
	
	for(int i = 0; i < 10; i++)
	{
		Azombie[i].announce();
	}
	delete[] Azombie;
	return 0;
}
