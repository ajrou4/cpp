#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name(name), grade(1){
}
Bureaucrat::Bureaucrat(std::string name, int grade):name(name), grade(grade){
    std::cout<<name << " say hello!" << std::endl;
}

 
Bureaucrat::Bureaucrat(const Bureaucrat &src){
    *this = src;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src){
    if(this != &src)
    {
        this->grade = src.grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat(){
     std::cout << "Bureaucrat  say bye!" << std::endl;
}

std::string Bureaucrat::getName()const{
    return name;
}

int Bureaucrat::getGrade()const{
    return grade;
}
std::string Bureaucrat::GradeTooHighException::what(){
    return ("Grade is To High");
}
std::string Bureaucrat::GradeTooLowException::what(){
    return ("Grade is To Low");
}

void Bureaucrat::incrementGrade(){
    grade--;
    if(grade < 1)
        throw GradeTooHighException();
} 
void Bureaucrat::decrementGrade(){
    grade++;
    if(grade > 150)
        throw GradeTooLowException();
}
std::ostream& operator<<(std::ostream &out, const Bureaucrat &bureaucrat){
    out << bureaucrat.getName() <<", bureaucrat grade" << bureaucrat.getGrade()<< std::endl;
    return out;
}