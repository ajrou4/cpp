#ifndef AFORM_HPP
#define AFORM_HPP
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <exception> 

class Bureaucrat;

class AForm
{
    private:
        std::string const name;
        bool isSigned;
        int const gradeRequiredToSing;
        int const gradeRequiredToExecute;
    public:
        AForm();
        AForm(std::string const _name, int const gradeRequiredToSing, int const gradeRequiredToExecute);
        AForm(const AForm &src);
        AForm & operator=(const AForm &src);
        void beSigned( const Bureaucrat &b);
        std::string getName()const;
        int getGradeToSing()const;
        int getGradeToExecute()const;
        bool isSignedstatus() const;
        virtual void execute(Bureaucrat const & executor) const = 0;
        virtual ~AForm();
    class GradeTooHighException : public std::exception 
	{
		public:
				virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception 
	{
		public:
				virtual const char* what() const throw();
	};
};
std::ostream& operator<<(std::ostream &os, AForm &form);
#endif