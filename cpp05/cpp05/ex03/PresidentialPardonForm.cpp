#include"PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm():AForm("PresidentialPardonForm", 25, 5){
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5), _target(target){
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src){
    *this = src; 
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src){
    if(this!=&src)
        this->_target = src._target;
    return *this;
}
PresidentialPardonForm::~PresidentialPardonForm(){
}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    if(executor.getGrade() < getGradeToExecute())
        throw GradeTooLowException();
    if(!isSignedstatus())
        throw GradeTooLowException();
    std::cout << "Informs that " << _target<< " has been pardoned by Zaphod Beeblebrox." << std::endl;
}