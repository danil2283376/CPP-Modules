#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
    private:
        std::string formsNames[3];
    public:
        Intern();
        Intern(Intern const &copy);
        ~Intern();
        class FormCreatedError : public std::exception
        {
            virtual const char *what() const throw();
        };
        Intern &operator=(Intern const &target);
        Form *makeForm(std::string typeForm, std::string nameForm);
};

#endif