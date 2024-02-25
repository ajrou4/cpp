#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat gradian("majrou", 60);
        Form f("form", 50, 70);
        gradian.signForm(f);
        std::cout<< "form: " << f << std::endl; 
    }
    catch(std::exception &e)
    {
        std::cout<<e.what()<< std::endl;
    }
    return 0;
}