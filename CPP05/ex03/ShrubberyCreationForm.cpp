#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
    Form("ShrubberyCreationForm", 120, 100)
{
    this->_target = "target";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
    Form("ShrubberyCreationForm", 100, 120)
{
    this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) :
    Form(copy)
{
    this->_target = copy._target;
}

const char* ShrubberyCreationForm::FileNotOpen::what() const throw()
{
    return ("File not open");
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &target)
{
    this->_target = target._target;
    return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &target) const
{
    if (Form::getWriten() == false)
        throw Form::FormNotWritenException();
    if (target.getGrade() > this->getExecute())
        throw Form::LowExecuteException();
    std::ofstream fin(_target);
    if (fin.is_open() == false)
        throw ShrubberyCreationForm::FileNotOpen();
    fin << "Hi there 👋\n";
    fin.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}