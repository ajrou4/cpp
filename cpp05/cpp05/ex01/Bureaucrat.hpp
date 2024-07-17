#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include <exception> 
#include "Form.hpp"

class Form;
class Bureaucrat
{
    private:
            std::string const name;
			int grade;
	public: 
			Bureaucrat(const Bureaucrat &src);
			Bureaucrat& operator=(const Bureaucrat &src);
			Bureaucrat();
			Bureaucrat(std::string const name,int grade);
			~Bureaucrat();
			std::string getName()const;
			int getGrade()const;
			void incrementGrade();
			void decrementGrade();
			void signForm(Form &f);
	class GradeTooHighException : public std::exception 
	{
		public:
				virtual  const char* what() const throw();
	};
	class GradeTooLowException : public std::exception 
	{
		public:
				virtual  const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &bureaucrat);
#endif