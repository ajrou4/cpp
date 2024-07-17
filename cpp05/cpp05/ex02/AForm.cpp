#include "AForm.hpp"

AForm::AForm():name("majrou"), gradeRequiredToSing(80),gradeRequiredToExecute(50){
}
AForm::AForm(std::string const _name, int const gradeRequiredToSing, int const gradeRequiredToExecute):name(_name), gradeRequiredToSing(gradeRequiredToSing),gradeRequiredToExecute(gradeRequiredToExecute){
}
AForm::AForm(const AForm &src):name(src.name), gradeRequiredToSing(src.gradeRequiredToSing),gradeRequiredToExecute(src.gradeRequiredToExecute){
    *this = src;
}
AForm &AForm::operator=(const AForm &src){
    if(this != &src)
        this->isSigned = src.isSigned;
    return *this;
}
void AForm::beSigned(const Bureaucrat &b){
    if(b.getGrade() <= gradeRequiredToSing){
        isSigned = true;
        std::cout << b.getName() << " signs " << name << std::endl;
    }
    else
        throw GradeTooLowException();
}
int AForm::getGradeToExecute()const{
    return gradeRequiredToExecute;
}

int AForm::getGradeToSing()const{
    return gradeRequiredToSing;
}
bool AForm ::isSignedstatus() const{
    return isSigned;
}
std::string AForm::getName() const{
    return name;
}
const char *AForm::GradeTooHighException::what()const throw(){
    return "grade is High";
}
const char *AForm::GradeTooLowException::what()const throw(){
    return "grade is Low";
}

AForm::~AForm(){
}
std::ostream& operator<<(std::ostream &os, AForm &form){
    os << form.getName() << "Singed: ";
    if(form.isSignedstatus())
        os << "Yes";
    else
        os  << "No";
    os << ", grade to sing "<<  form.getGradeToSing()<< ", grade to execut "<< form.getGradeToExecute()<< std::endl;
    return os;
} 