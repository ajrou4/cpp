#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include <string>
#include <exception> 


class RobotomyRequestForm :public AForm
{
    private:
            std::string _target;
    public:
            RobotomyRequestForm();
            RobotomyRequestForm(std::string target);
            RobotomyRequestForm(const RobotomyRequestForm &src);
            RobotomyRequestForm& operator=(const RobotomyRequestForm &src);
            virtual ~RobotomyRequestForm();
            void execute(Bureaucrat const & executor) const;
};
#endif