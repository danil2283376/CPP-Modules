#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

void testShrubbbery() {
	/*
	 * Подписание и выполнение
	 */
	try {
		Bureaucrat vova("Vova", 1);
		ShrubberyCreationForm form1("bereza");
		vova.signForm(&form1);
		vova.executeForm(form1);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	/*
	 * Уровень бюрократа маленький он сможет подписать, но не выполнить
	 */
	try {
		Bureaucrat jora("Jora", 138);
		ShrubberyCreationForm form1("bereza");
		jora.signForm(&form1);
		jora.executeForm(form1);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}

void testRobot() {
	/*
	 * Подписание и выполнение
	 */
	try {
		Bureaucrat vova("Vova", 1);
		RobotomyRequestForm form1("bereza");
		vova.signForm(&form1);
		vova.executeForm(form1);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	/*
	 * Уровень бюрократа маленький он сможет подписать, но не выполнить
	 */
	try {
		Bureaucrat jora("Jora", 60);
		RobotomyRequestForm form1("bereza");
		jora.signForm(&form1);
		jora.executeForm(form1);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}

void testPresidential() {
	/*
	 * Подписание и выполнение
	 */
	try {
		Bureaucrat vova("Vova", 1);
		PresidentialPardonForm form1("bereza");
		vova.signForm(&form1);
		vova.executeForm(form1);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	/*
	 * Уровень бюрократа маленький он сможет подписать, но не выполнить
	 */
	try {
		Bureaucrat jora("Jora", 20);
		PresidentialPardonForm form1("bereza");
		jora.signForm(&form1);
		jora.executeForm(form1);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}

int main()
{
	testShrubbbery();
	std::cout << std::endl;
	testRobot();
	std::cout << std::endl;
	testPresidential();
}