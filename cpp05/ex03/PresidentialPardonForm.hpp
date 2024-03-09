#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <exception> 


class  PresidentialPardonForm : public AForm
{
    private:
            std::string _target;
    public:
            PresidentialPardonForm();
            PresidentialPardonForm(std::string target);
            PresidentialPardonForm(const PresidentialPardonForm& src);
            PresidentialPardonForm& operator=(const PresidentialPardonForm &src);
            ~PresidentialPardonForm();
            void  execute(Bureaucrat const& executor) const;
};
#endif 