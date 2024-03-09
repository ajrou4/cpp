#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"
class AForm;
class Intern {
    public:
        Intern();
        Intern(const Intern &src);
        ~Intern();
        Intern & operator=(const Intern &src);
        AForm* makeForm(std::string formName, std::string formTarget);
    class InvalidFormNameException : public std::exception
    {
        public:
                virtual const char* what() const throw();
    };
    private:
            AForm* creatShrubberyCreationForm(std::string target);
            AForm* creatRobotomyRequestForm(std::string target);
            AForm* creatPresidentialPardonForm(std::string target);

};

#endif 
