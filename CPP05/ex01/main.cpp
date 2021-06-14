#include "Form.hpp"
#include "Bureaucrat.hpp"

void SignTest()
{
/*
 * Бюрократ не может подписать форму, так как уровень формы выше уровня бюрократа
 */
	try {
		Bureaucrat jim("Jimmy", 12);
		std::cout << jim;
		Form form1("document1", 2, 13);
		jim.signForm(&form1);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
/*
 * Бюрократ подпишет форму
 */
	try {
		Bureaucrat hero("Hero", 12);
		std::cout << hero;
		Form form1("document2", 12, 13);
		hero.signForm(&form1);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
/*
 * Бюрократ не подпишет форму, так как форма уже подписана
 */
	try {
		Bureaucrat hero("Hero", 12);
		std::cout << hero;
		Form form1("document2", 12, 13);
		form1.beSigned(&hero);
		hero.signForm(&form1);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}

int main()
{
    SignTest();
}