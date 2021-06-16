#include "Intern.hpp"

Intern::Intern()
{
    this->formsNames[0] = "PresidentialPardon";
    this->formsNames[1] = "RobotomyRequest";
    this->formsNames[2] = "ShrubberyCreation";
}

Intern::Intern(Intern const &copy)
{

}

const char *Intern::FormCreatedError::what() const throw()
{
    return ("Form created error");
}

Form *Intern::makeForm(std::string typeForm, std::string nameForm)
{
    Form *forms[3];
    Form *createdForm = nullptr;

    forms[0] = new PresidentialPardonForm(nameForm);
    forms[1] = new RobotomyRequestForm(nameForm);
    forms[2] = new ShrubberyCreationForm(nameForm);

    for (int i = 0; i < 3; i++)
    {
        if (this->formsNames[i] == typeForm)
        {
            createdForm = forms[i];
            std::cout << "Intern create form " << forms[i]->getName() << std::endl;
            for (int j = 0; j < 3; j++)
            {
                if (i != j)
                    delete forms[j];
            }
            return (createdForm);
        }
    }
    if (createdForm == nullptr)
        throw FormCreatedError();
    for (int i = 0; i < 3; i++)
    {
        delete forms[i];
    }
    return (createdForm);
}

Intern::~Intern()
{
    
}