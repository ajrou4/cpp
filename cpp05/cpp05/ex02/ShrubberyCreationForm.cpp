#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():AForm("PresidentialPardonForm", 145, 137){
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm("PresidentialPardonForm", 145, 137),_target(target){
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src){
    *this = src;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src){
    if(this != &src)
        this->_target = src._target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
    if(executor.getGrade() < getGradeToExecute())
        throw GradeTooLowException();
    if(!isSignedstatus())
        throw GradeTooLowException();
    std:: ofstream outputFile((_target+ "_shrubbery"));
    if(!outputFile)
        std::cout << "cannot open file: "<< _target <<std::endl;
    outputFile <<"                                              "<<std::endl;
    outputFile <<"                 ,@@@@@@@,                    "<<std::endl;
    outputFile <<"         ,,,.   ,@@@@@@/@@,  .oo8888o.        "<<std::endl;
    outputFile <<"      ,&%%%%&%&&%,@@@@@/@@@@@@,8888\\88/8o       "<<std::endl;
    outputFile <<"     ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'      "<<std::endl;
    outputFile <<"     %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'      "<<std::endl;
    outputFile <<"     %&&%/ %&%%%%&&@@\\ V /@@' `88\\8 `/88'       "<<std::endl;
    outputFile <<"     `&%\\ ` /%&'    |.|        \\ '|8'         "<<std::endl;
    outputFile <<"         |o|        | |         | |           "<<std::endl;
    outputFile <<"         |.|        | |         | |           "<<std::endl;
    outputFile <<"  jgs \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_   "<< std::endl;
    outputFile.close();
}