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
        std::string getName() const;
        bool getWriten() const;
        int getGrade() const;
        int getExecute() const;
        Form(std::string name, int grade, int execute);
        Form(Form const &copy);
        class GradeTooHighException : public std::exception
        {
            virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            virtual const char *what() const throw();
        };
        class FormNotWritenException : public std::exception
        {
            virtual const char *what() const throw();
        };
        class LowExecuteException : public std::exception
        {
            virtual const char *what() const throw();
        };
        virtual ~Form();
        void beSigned(Bureaucrat *bureucrat);
        virtual void execute(Bureaucrat const &bureaucrat) const = 0;
};

std::ostream &operator<<(std::ostream &, Form &);

#endif