
#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"
class AForm;
class Intern {
    public:
        Intern();
        Intern(const Intern &src);
        ~Intern();
        Intern & operator=(const Intern &src);
        AForm* makeForm(std::string formName, std::string formTarget);
    private:
            // static ShrubberyCreationForm;
            // static RobotomyRequestForm;
            // static PresidentialPardonForm;
            int formNumber[3] ;
};

#endif 
