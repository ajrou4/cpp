#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <exception> 

class Bureaucrat;

class Form
{
    private: 
        std::string const name;
        bool isSigned;
        int const gradeRequiredToSing;
        int const gradeRequiredToExecute;
    public:
        Form();
        Form(std::string const _name, int const gradeRequiredToSing, int const gradeRequiredToExecute);
        Form(const Form &src);
        Form & operator=(const Form &src);
        void beSigned( const Bureaucrat &b);
        std::string getName();
        int getGradeToSing()const;
        int getGradeToExecute()const;
        bool isSignedstatus() const;
        ~Form();
    class GradeTooHighException : public std::exception 
	{
		public:
				virtual const char* what();
	};
	class GradeTooLowException : public std::exception 
	{
		public:
				virtual const char* what();
	};
    
};
std::ostream& operator<<(std::ostream &os, Form &form);
#endif