#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
}
Bureaucrat::Bureaucrat(std::string name): name(name), grade(1){
    std::cout << "Bureaucrat say hello!" << std::endl;
}

 
Bureaucrat::Bureaucrat(const Bureaucrat &src){
    *this = src;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src){
    if(this != &src)
    {
        this->name = src.name;
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
    return ("Is To High");
}
std::string Bureaucrat::GradeTooLowException::what(){
    return ("Is To Low");
}
void Bureaucrat::incrementGrade(){
    grade--;
    if(grade < 1)
        throw GradeTooHighException()
} 
void Bureaucrat::decrementGrade(){
    grade++;
    if(grade > 150)
        throw GradeTooLowException();
}
std::ostream& operator<<(std::ostream &out, const Bureaucrat &bureaucrat){
    out << bureaucrat.getName() <<", bureaucrat grade" << bureaucrat.getGrade()<< std::endl;
}
 