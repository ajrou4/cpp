#include "Form.hpp"

Form::Form():name("majrou"), isSigned(false), gradeRequiredToSing(gradeRequiredToSing), gradeRequiredToExecute(gradeRequiredToExecute){
    std::cout << getName() << " Say hello" << std::endl;
}
Form:: Form(std::string const _name, int const gradeRequiredToSing, int const gradeRequiredToExecute):name("name"), isSigned(isSigned), gradeRequiredToSing(gradeRequiredToSing), gradeRequiredToExecute(gradeRequiredToExecute){
}
Form::Form(const Form &src):name("name"), isSigned(isSigned), gradeRequiredToSing(gradeRequiredToSing), gradeRequiredToExecute(gradeRequiredToExecute){
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
const char *Form::GradeTooHighException::what(){
    return "grade is High";
}
const char *Form::GradeTooLowException::what(){
    return "grade is Low";
}

Form::~Form(){
    std::cout<< getName() <<" Say bay"<< std::endl;
}
std::ostream& operator<<(std::ostream &os, Form &form){
    os << form.getName() << "Singed: " ;
    if(form.isSignedstatus())
        os << "Yes";
    else
        os  << "No";
    os << ", grade to sing "<<  form.getGradeToSing()<< ", grade to execut "<< form.getGradeToExecute()<< std::endl;
    return os;
} 