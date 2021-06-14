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
    {
        printf("LOL\n");
        throw Form::GradeTooHighException();
    }
}

std::string Form::getName()
{
    return (this->_name);
}

bool Form::getWriten()
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

int Form::getGrade()
{
    return (this->_grade);
}

int Form::getExecute()
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