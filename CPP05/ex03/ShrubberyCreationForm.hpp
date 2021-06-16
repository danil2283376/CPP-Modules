#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <fstream>

class ShrubberyCreationForm : public Form
{
    private:
        std::string _target;
        ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm const &copy);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &target);
    public:
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm();
        class FileNotOpen : public std::exception
        {
            virtual const char *what() const throw();
        };
        virtual void execute(Bureaucrat const &target) const;
};

#endif