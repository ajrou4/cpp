#include "Intern.hpp"

Intern::Intern(){
}
Intern::Intern(const Intern &src){
    (void)src;
}

Intern &Intern::operator=(const Intern &src){
        (void)src;
        return *this;
}

Intern::~Intern(){
}

AForm* Intern:: creatShrubberyCreationForm(std::string target){
    return new ShrubberyCreationForm(target);
}
AForm* Intern::creatRobotomyRequestForm(std::string target){
    return new RobotomyRequestForm(target); 
}
AForm* Intern::creatPresidentialPardonForm(std::string target)
{
    return new PresidentialPardonForm(target);
}
const char* Intern::InvalidFormNameException::what() const throw(){
    return ("ERROR: Invalid Form Name!");
}
AForm* Intern::makeForm(std::string formName, std::string formTarget){

        std::cout << "Intern creates " << formName << " for target: " << formTarget << std::endl;
        std::string numName[3] = {"shrubbery creation","robotomy request","presidential pardon"};
        int i;
        for(i = 0; i < 3;i++){
            if(formName == numName[i])
                break;
        }
        switch (i) 
        {
            case '0':
                return   creatPresidentialPardonForm(formTarget);
            case '1':
                return  creatRobotomyRequestForm(formTarget);
            case '2':
                return creatPresidentialPardonForm(formTarget);
            default:
                throw InvalidFormNameException();
        }
        return nullptr;
}

