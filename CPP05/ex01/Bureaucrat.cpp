#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    this->_name = "Bureaucrat";
    this->_grade = 50;
    std::cout << "Bureaucrat is born!\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
    this->_name = name;
    this->_grade = grade;
    std::cout << name << " is up!\n";
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
    this->_name = copy._name;
    this->_grade = copy._grade;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << this->_name << " is die!\n";
}

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Bureaucrat::GradeTooLowException");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Bureaucrat::GradeTooHighException");
}

void Bureaucrat::UpGrade(int grade)
{
    this->_grade += grade;
    if (_grade > 150)
        throw GradeTooHighException();
}

void Bureaucrat::DownGrade(int grade)
{
    this->_grade -= grade;
    if (_grade < 1)
        throw GradeTooLowException();
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &bureaucrat)
{
    this->_name = bureaucrat._name;
    this->_grade = bureaucrat._grade;
    return (*this);
}

void Bureaucrat::signForm(Form *form)
{
    if (form->getWriten() == true)
    {
        std::cout << this->_name << " cannot sign " << form->getName()
            << " because " << "low lvl!\n";
    }
    else if (form->getWriten() == false)
    {
        Bureaucrat thisCopy = *this;
        form->beSigned(this);
        std::cout << this->_name << " signs " << form->getName() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &fout, Bureaucrat &target)
{
    fout << target.getName() << " " << target.getGrade() << std::endl;
    return (fout);
}