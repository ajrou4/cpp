#include "ClapTrap.hpp"

int main()
{
    ClapTrap A("majrou");

    A.desplayInfo();
    A.takeDamage(10);
    A.desplayInfo();
    A.attack("attack moi");
    A.desplayInfo();
    A.beRepaired(2);
    A.desplayInfo();
}