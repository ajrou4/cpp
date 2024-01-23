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
			// virtual const char* what() const noexcept;
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