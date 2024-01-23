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
        // std:string GradeTooHighException();
        // std:string GradeTooLowException();
        void beSigned();
        void signForm();
        std::string getName();
        int getGrade()const;
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
std::ostream& operator<<(std::ostream &out, const Form &_Form);
#endif