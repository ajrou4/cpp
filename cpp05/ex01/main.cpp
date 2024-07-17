#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat gradian("majrou", 50);
        Form f("KING", 50, 70);
        gradian.signForm(f);
        std::cout<< f << std::endl; 
    }
    catch(std::exception &e)
    {
        std::cout<<e.what()<< std::endl;
    }
    return 0;
}