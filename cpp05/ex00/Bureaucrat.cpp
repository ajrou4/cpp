#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
    std::cout << "Bureaucrat say hello!" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name){

}

Bureaucrat::Bureaucrat(const Bureaucrat &src){
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src){
}

Bureaucrat::~Bureaucrat(){
     std::cout << "Bureaucrat  say bye!" << std::endl;
}

std::string Bureaucrat::getName(){
    return name;
}

int Bureaucrat::getGrade(){
    return grade;
}

GradeTooHighException::GradeTooHighException(){

}

GradeTooHighException:: ~GradeTooHighException(){

}

GradeTooHighException &GradeTooHighException::operator=(const GradeTooHighException &src){

}

std::string GradeTooHighException::what(){
    
}