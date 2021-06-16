#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string _target;
        PresidentialPardonForm(PresidentialPardonForm const &copy);
        PresidentialPardonForm &operator=(PresidentialPardonForm const &target);
    public:
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        void execute(const Bureaucrat &target) const;
};

#endif