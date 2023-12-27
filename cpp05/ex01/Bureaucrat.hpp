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
			Bureaucrat(const Bureaucrat &src);
			Bureaucrat& operator=(const Bureaucrat &src);
			Bureaucrat();
			Bureaucrat(std::string const name);
			~Bureaucrat();
			std::string getName();
			int getGrade();
			void incrementGrade();
			void decrementGrade();
	class GradeTooHighException : public std::exception 
	{
		public:
				virtual std::string what();
	};
	class GradeTooLowException : public std::exception 
	{
		public:
				virtual std::string what();
	};
};

#endif