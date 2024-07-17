#include "Form.hpp"

Form::Form():name("majrou"), isSigned(false), gradeRequiredToSing(50), gradeRequiredToExecute(100){
    std::cout << getName() << " Say hello" << std::endl;
}
Form::Form(std::string const _name, int const gradeRequiredToSign, int const gradeRequiredToExecute): name(_name), isSigned(false), gradeRequiredToSing(gradeRequiredToSign), gradeRequiredToExecute(gradeRequiredToExecute) {
}

Form::Form(const Form &src):name(src.name), isSigned(src.isSigned), gradeRequiredToSing(src.gradeRequiredToSing), gradeRequiredToExecute(src.gradeRequiredToExecute){
    *this = src;
}
Form &Form::operator=(const Form &src){
    if(this != &src)
        this->isSigned =  src.isSigned;
    return *this;
}

int Form::getGradeToExecute()const{
    return gradeRequiredToExecute;
}

int Form::getGradeToSing()const{
    return gradeRequiredToSing;
}

void Form::beSigned(const Bureaucrat &b){
    if(b.getGrade() <= gradeRequiredToSing )
          isSigned = true;
    else
        throw GradeTooLowException();
}
bool Form ::isSignedstatus() const{
    return isSigned;
}
std::string Form::getName(){
    return name;
}
const char *Form::GradeTooHighException::what()const throw(){
    return "grade is High";
}
const char *Form::GradeTooLowException::what()const throw(){
    return "grade is Low";
}

Form::~Form(){
    std::cout<< getName() <<" Say bye"<< std::endl;
}
std::ostream& operator<<(std::ostream &os, Form &form){
    os << form.getName() << " Singed: ";
    if(form.isSignedstatus())
        os << "Yes";
    else
        os  << "No";
    os << ", grade to sing "<<  form.getGradeToSing()<< ", grade to execut "<< form.getGradeToExecute();
    return os;
} 