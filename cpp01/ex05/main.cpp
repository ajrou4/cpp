#include "Harl.hpp"

int main()
{
    Harl ptr;
    std::string foo;
    std::cout << "please enter your Harl!!" << std::endl;
    std::cin >> foo;
    ptr.complain(foo);
    return 0;
}