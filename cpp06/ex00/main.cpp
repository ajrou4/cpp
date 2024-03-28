#include"ScalarConverter.hpp"

int main(int ac, char **av)
{
    if(ac == 2)
    {
        ScalarConverter::convert(av[1]);
    }
    else
        std::cout << "Error in input please use "<< av[0]<< " and 'Your string'" << std::endl;
    return 0;
}