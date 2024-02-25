#include "AForm.hpp"

AForm::AForm():name("majrou"), gradeRequiredToSing(80),gradeRequiredToExecute(50){
    std::cout<< "Hello"<< std::endl;
}
AForm::AForm(std::string const _name, int const gradeRequiredToSing, int const gradeRequiredToExecute):name(_name), gradeRequiredToSing(gradeRequiredToSing),gradeRequiredToExecute(gradeRequiredToExecute){
}
AForm::AForm(const AForm &src):src.name(name), src.gradeRequiredToSing(gradeRequiredToSing), src.gradeRequiredToExecute(gradeRequiredToExecute){
    *this = src;
}
AForm &AForm::operator=(const AForm &src){
    if(this != &src)
        this->isSigned = src.isSigned;
    return *this;
}