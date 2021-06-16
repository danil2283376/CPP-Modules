#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
    Form("PresidentialPardonForm", 25, 5)
{
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) :
    Form(copy)

{
    this->_target = copy._target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &target)
{
    this->_target = target._target;
    return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &target) const
{
    if (this->getWriten() == false)
        throw Form::FormNotWritenException();
    if (target.getGrade() > this->getExecute())
        throw Form::LowExecuteException();
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox.\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}