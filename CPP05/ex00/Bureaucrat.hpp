#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

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
};

std::ostream &operator<<(std::ostream &, Bureaucrat &);

#endif