#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include"PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Intern someRandomIntern;
    AForm* rrf = NULL;
    try
    {
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    }
    catch(std::exception &e)
    {
            std::cout <<"Error: " << e.what() << std::endl;
            delete rrf;
    }
    return 0;
}