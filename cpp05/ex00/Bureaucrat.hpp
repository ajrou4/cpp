#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include <exception> 
class Bureaucrat
{
    private:
            std::string const name;
			int grade;
	public: 
			Bureaucrat();
			Bureaucrat(std::string const name);
			~Bureaucrat();
			Bureaucrat(const Bureaucrat &src);
			Bureaucrat& operator=(const Bureaucrat &src);
			std::string getName();
			int getGrade();
};

class GradeTooHighException : public std::exception 
{
	public:
			GradeTooHighException();
			virtual ~GradeTooHighException();
			GradeTooHighException& operator=(const GradeTooHighException &src);
			virtual std::string what();
};

class GradeTooLowException : public std::exception 
{
	public:
			GradeTooLowException();
			virtual ~GradeTooLowException();
			GradeTooLowException& operator=(const GradeTooLowException &src);
			virtual std::string what();
};
#endif