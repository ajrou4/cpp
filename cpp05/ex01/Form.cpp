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
std::string Form::GradeTooHighException()::what(){
    return ("is Too High");
}
std::string  Form::GradeTooLowException():: what(){
    return ("is Too Low");
}
std::string Form:: getName(){
    return name;
}
void Form::beSigned(){
    if(signedForm == false){
        std::cout << getName() << "couldn’t sign <" << signForm()<<"because "<< getGrade()<< " then gerade for sign " <<std::endl;
    }
    else
    {
        std::cout << getName()<< "singed" << singForm()<< std::endl;
    }
}
int Form::getGrade()const{

}
void Form::signForm(){
    
}
Form::~Form(){

}
std::ostream& operator<<(std::ostream &out, const Form &_Form){
    out << _Form.getName()<< ", bureaucrat grade" << _Form.getGrade()<< std::endl;
    return out;
}