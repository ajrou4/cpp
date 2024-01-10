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
			Bureaucrat(std::string const name,int grade);
			~Bureaucrat();
			std::string getName()const;
			int getGrade()const;
			void incrementGrade();
			void decrementGrade();
	class GradeTooHighException : public std::exception 
	{
		public:
				virtual  std::string what();
	};
	class GradeTooLowException : public std::exception 
	{
		public:
				virtual  std::string what();
	};
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &bureaucrat);
#endif