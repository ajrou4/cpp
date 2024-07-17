#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include <exception> 
#include "AForm.hpp"
class AForm;
class  Bureaucrat
{
    private:
            std::string const name;
			int grade;
	public: 
			Bureaucrat();
			Bureaucrat(std::string const name,int grade);
			Bureaucrat(const Bureaucrat &src);
			Bureaucrat& operator=(const Bureaucrat &src);
			~Bureaucrat();
			std::string getName()const;
			int getGrade()const;
			void incrementGrade();
			void decrementGrade();
			void signForm(AForm &f);
			void executeForm(AForm const &form);
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