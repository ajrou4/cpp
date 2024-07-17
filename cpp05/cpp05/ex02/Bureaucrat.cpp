#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
}
Bureaucrat::Bureaucrat(std::string name, int grade):name(name), grade(grade){
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
void Bureaucrat::signForm(AForm &f)
{  
    try{
        f.beSigned(*this);
        std::cout << *this << "signed form " << f.getName() << std::endl;
    }
    catch(std::exception &e){
        std::cout << getName() << " couldn’t sign " << f.getName() << " because" << e.what() << std::endl;  
    }
}

void Bureaucrat ::executeForm(AForm const &form)
{
    try{
        form.execute(*this);
        std::cout << getName() << " executed " <<form.getName()<< std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << getName() << " couldn’t execute <" <<form.getName()<< std::endl;
    }
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
    out << bureaucrat.getName() <<" ,bureaucrat grade " << bureaucrat.getGrade()<< std::endl;
    return out;
}
