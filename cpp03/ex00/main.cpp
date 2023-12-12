#include "ClapTrap.hpp"

int main()
{
    ClapTrap A("majrou");

    A.desplayInfo();
    A.takeDamage(5);
    A.desplayInfo();
    A.attack("attack moi");
    A.desplayInfo();
    A.beRepaired(10);
    A.desplayInfo();
}