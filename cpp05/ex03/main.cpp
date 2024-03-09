#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include"PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(){
    try
    {
        Bureaucrat ajrou("ajrou", 25);
        RobotomyRequestForm Nihad("ajrou");
        RobotomyRequestForm Naruto("ajrou");
        PresidentialPardonForm Sasuki("ajrou");
        std::cout <<"form sing is : " << std::endl;
        Nihad.beSigned(ajrou);
        Naruto.beSigned(ajrou);
        Sasuki.beSigned(ajrou);
        std::cout <<" form execute is : " << std::endl;
        Nihad.execute(ajrou);
        Naruto.execute(ajrou);
        Sasuki.execute(ajrou);
    }
    catch(std::exception &e)
    {
        std::cout <<"Error " << e.what() << std::endl;
    }
    return 0;
}