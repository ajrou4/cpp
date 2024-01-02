#include "Form.hpp"
Form::Form(): name(name), signedForm(false), gradeRequiredToSing(gradeRequiredToSing), gradeRequiredToExecute(gradeRequiredToExecute){
}
Form::Form(std::string _name, bool singed, int const gradeRequiredToSing, int const gradeRequiredToExecute): name(name), signedForm(false), gradeRequiredToSing(gradeRequiredToSing), gradeRequiredToExecute(gradeRequiredToExecute){
    std::cout << name<< ": Say Hello"<<std::endl;
}

Form::Form(const Form &src): name(name), signedForm(signedForm), gradeRequiredToSing(gradeRequiredToSing), gradeRequiredToExecute(gradeRequiredToExecute){
    *this = src;
}
Form &Form::operator=(const Form &src){
    if(this != &src){
        signedForm = src.signedForm;  
    }
    return *this;
}
void Form::GradeTooHighException(){

}
void Form::GradeTooLowException(){

}
void Form::beSigned(){
    if(signedForm == false){
        
    }
    else
    {

    }
}
void Form::signForm(){
    
}
Form::~Form(){

}
std::ostream& operator<<(std::ostream &out, const Form &Form){
    out << Form. <<", bureaucrat grade" << Form_.getGrade()<< std::endl;
    return out;
}