#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include <string>
#include <fstream>


class ShrubberyCreationForm : public AForm
{
    private:
            std::string _target;
    public:
            ShrubberyCreationForm();
            ShrubberyCreationForm(std::string target);
            ShrubberyCreationForm(const ShrubberyCreationForm &src);
            ShrubberyCreationForm& operator=(const ShrubberyCreationForm &src);
            virtual ~ShrubberyCreationForm();
            void execute(Bureaucrat const & executor) const;
};




#endif