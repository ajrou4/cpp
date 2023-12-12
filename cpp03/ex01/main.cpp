#include "ScavTrap.hpp"

int main()
{
    ClapTrap clap("majrou");
    clap.desplayInfo();
    clap.takeDamage(5);
    clap.desplayInfo();
    clap.attack("attack moi");
    clap.desplayInfo();
    clap.beRepaired(10);
    clap.desplayInfo();
    return 0;
}