#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      

class Zombie
{
private:
	std:: string name;
public:
   Zombie();
    Zombie(std::string name);
    ~Zombie();
    void setName(std::string tname);
    void announce()const;
};
Zombie* zombieHorde( int N, std:: string name );

#endif
