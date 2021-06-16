#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        std::string _target;
        RobotomyRequestForm(RobotomyRequestForm const &copy);
        RobotomyRequestForm &operator=(RobotomyRequestForm const &target);
    public:
        RobotomyRequestForm(std::string _target);
        ~RobotomyRequestForm();
        virtual void execute(Bureaucrat const &target) const;
};

#endif