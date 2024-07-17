#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include"PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(){
    try
    {
        Bureaucrat ajrou("ajrou", 145);
        RobotomyRequestForm Nihad("ajrou");
        ShrubberyCreationForm Naruto("stack");
        PresidentialPardonForm Sasuki("vector");
        std::cout <<"Form sing is : "<< std::endl;
        Nihad.beSigned(ajrou);
        Naruto.beSigned(ajrou);
        Sasuki.beSigned(ajrou);
        std::cout <<"Form execute is : ";
        Nihad.execute(ajrou);
        Naruto.execute(ajrou);
        Sasuki.execute(ajrou);
    }
    catch(std::exception &e)
    {
        std::cout <<"Error: " << e.what() << std::endl;
    }
    return 0;
}