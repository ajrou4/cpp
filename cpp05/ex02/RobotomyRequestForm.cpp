#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():AForm("PresidentialPardonForm", 72, 45){
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target): AForm("PresidentialPardonForm", 72, 45),_target(_target){
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src){
    *this = src; 
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src){
    if(this!=&src)
        this->_target = src._target;
    return *this;
}
RobotomyRequestForm::~RobotomyRequestForm(){
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    if(executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException();
    if(!isSignedstatus())
        throw GradeTooLowException();
   srand(time(0));
   if((rand() % 2) == 0)
        std::cout << "that "<< _target <<" has been robotomized " << std::endl;
    else
        std::cout << "that the robotomy failed"<<std::endl;
}