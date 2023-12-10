#include "Harl.hpp"
Harl:: Harl(){

}

Harl:: ~Harl(){

}

void Harl::debug()
{
    std::cout << "Initiating data transmission to remote server" << std::endl;
}
void Harl::info()
{
    std::cout << "Revised order ready for delivery" << std::endl;
}
void Harl::warning()
{
    std::cout << "Customer loyalty discrepancy detected" << std::endl;
}
void Harl::error(){
    std::cout << "Failed to process payment for order ID 789" << std::endl;
}

void Harl::complain( std::string level )
{
    std::string arry[]= {"error", "info", "warning", "debug"};
    f fPtr[4]= {&Harl::debug, &Harl::info, &Harl::warning,&Harl::error};
    for(int i = 0; i < 4; i++)
    {
        if(arry[i] == level){
            (this->*fPtr[i])();
            return ;
        }
    }
    std:: cout << "Bad Harl :()" << std::endl;
}
