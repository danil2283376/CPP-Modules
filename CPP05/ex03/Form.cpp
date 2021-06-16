#include "Form.hpp"

Form::Form(std::string name, int grade, int execute)
{
    this->_name = name;
    this->_grade = grade;
    this->_execute = execute;
    this->_isWriten = false;
    if (this->_grade > 150 || this->_execute > 150)
        throw Form::GradeTooLowException();
    if (this->_grade < 1 || this->_execute < 1)
        throw Form::GradeTooHighException();
}

Form::Form(Form const &copy)
{
    this->_name = copy._name;
    this->_isWriten = copy._isWriten;
    this->_grade = copy._grade;
    this->_execute = copy._execute;
}

std::string Form::getName() const
{
    return (this->_name);
}

bool Form::getWriten() const
{
    return (this->_isWriten);
}

const char *Form::GradeTooHighException::what() const throw() 
{
    return ("Form is HIGH!");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Form is LOW!");
}

const char *Form::FormNotWritenException::what() const throw()
{
    return ("Form not writen");
}

const char *Form::LowExecuteException::what() const throw()
{
    return ("Low execute exception");
}

int Form::getGrade() const
{
    return (this->_grade);
}

int Form::getExecute() const
{
    return (this->_execute);
}

std::ostream &operator<<(std::ostream &fout, Form &target)
{
    fout << target.getName() << " " << target.getGrade()
        << " " << target.getExecute() << " " << target.getWriten();
    return (fout);
}

void Form::beSigned(Bureaucrat *bureucrat)
{
    if (bureucrat == nullptr)
        return ;
    if (bureucrat->getGrade() <= this->getGrade())
        this->_isWriten = true;
    else
        throw Form::GradeTooLowException();
}


Form::~Form()
{

}