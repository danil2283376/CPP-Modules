#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string _name;
        bool _isWriten;
        int _grade;
        int _execute;
    public:
        std::string getName();
        bool getWriten();
        int getGrade();
        int getExecute();
        Form(std::string name, int grade, int execute);
        class GradeTooHighException : public std::exception
        {
            virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            virtual const char *what() const throw();
        };
        ~Form();
        void beSigned(Bureaucrat *bureucrat);
};

std::ostream &operator<<(std::ostream &, Form &);

#endif