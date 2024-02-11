#include "Form.hpp"

Form::Form():name("majrou"), isSigned(false), gradeRequiredToSing(gradeRequiredToSing), gradeRequiredToExecute(gradeRequiredToExecute){
}
Form:: Form(std::string const _name, bool signedForm, int const gradeRequiredToSing, int const gradeRequiredToExecute):name("name"), isSigned(isSigned), gradeRequiredToSing(gradeRequiredToSing), gradeRequiredToExecute(gradeRequiredToExecute){
}
Form::Form(const Form &src):name("name"), isSigned(isSigned), gradeRequiredToSing(gradeRequiredToSing), gradeRequiredToExecute(gradeRequiredToExecute){
}
Form &Form::operator=(const Form &src){
}

void Form::signForm(){   
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
        isSigned = false;
}

std::string Form::getName(){
    return name;
}
const char *Form::GradeTooHighException::what(){
    return "is High";
}
const char *Form::GradeTooLowException::what(){
    return "is Low";
}

Form::~Form(){
    std::cout<< name <<" Say bay"<< std::endl;
}
