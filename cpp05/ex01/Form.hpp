#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>
#include <exception> 

class Form
{
    private: 
        std::string name;
        bool signedForm;
        int const gradeRequiredToSing;
        int const gradeRequiredToExecute;
    public:
        Form();
        Form(std::string _name, bool signedForm, int const gradeRequiredToSing, int const gradeRequiredToExecute);
        Form(const Form &src);
        Form & operator=(const Form &src);
        void GradeTooHighException();
        void GradeTooLowException();
        void beSigned();
        void signForm();
        ~Form();
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
std::ostream& operator<<(std::ostream &out, const Form &Form);
#endif