#include "Intern.hpp"

Intern::Intern(){

}
Intern::Intern(const Intern &src){
}

Intern::~Intern(){
}

Intern &Intern::operator=(const Intern &src){

}
const char* Intern::InvalidFormNameException::what() const throw(){
    return ("ERROR:Invalid Form Name!");
}
AForm* Intern::makeForm(std::string formName, std::string formTarget){

        std::cout << "Intern creates " << formName << " for target: " << formTarget << std::endl;

        switch (formName[0]) 
        {
            case 's':
                return  creatShrubberyCreationForm(formTarget);
            case 'r':
                return  creatRobotomyRequestForm(formTarget);
            case 'p':
                return  creatPresidentialPardonForm(formTarget);
            default:
                std::cout << "Error: Form " << formName << " not recognized" << std::endl;
                throw InvalidFormNameException();
        }
}

