#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
    Form("RobotomyRequestForm", 72, 45)
{
    this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) :
    Form(copy)
{
    this->_target = copy._target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &target)
{
    this->_target = target._target;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &target) const
{
    if (this->getWriten() == false)
        throw Form::FormNotWritenException();
    if (target.getGrade() > this->getExecute())
        throw Form::LowExecuteException();
    std::srand(std::time(NULL));
    int rand = std::rand();
    if (rand % 2 == 0)
        std::cout << "Even number\n";
    else
        std::cout << "Not even number\n";
}