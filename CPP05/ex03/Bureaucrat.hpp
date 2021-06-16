#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        std::string _name;
        int _grade;
        Bureaucrat();
    public:
        ~Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const &copy);
        std::string getName() const;
        int getGrade() const;
        void UpGrade(int grade);
        void DownGrade(int grade);
        class GradeTooHighException : public std::exception
        {
            virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            virtual const char *what() const throw();
        };
        Bureaucrat &operator=(Bureaucrat &bureaucrat);
        void signForm(Form *form);
        void executeForm(const Form &form) const;
};

std::ostream &operator<<(std::ostream &, Bureaucrat &);

#endif