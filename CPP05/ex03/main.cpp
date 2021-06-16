#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	try {
		Intern	someRandomIntern;
		Form*	rrf;
		rrf = someRandomIntern.makeForm("RobotomyRequest", "Bender");
		std::cout << *rrf;
	}
	catch (std::exception& exception) {
		std::cout << exception.what() << std::endl;
	}
}