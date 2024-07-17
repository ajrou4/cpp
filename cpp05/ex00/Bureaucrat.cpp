#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
}
Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name), grade(grade) {
    std::cout << name << " says hello!" << std::endl;
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
     std::cout << name <<" say bye!" << std::endl;
}

std::string Bureaucrat::getName()const{
    return name;
}

int Bureaucrat::getGrade()const{
    return grade;
}
const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return ("Grade is To High");
}
const char* Bureaucrat::GradeTooLowException::what() const throw(){
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
