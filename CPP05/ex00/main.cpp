#include "Bureaucrat.hpp"

int main() 
{
    try
    {
        Bureaucrat *bureaucrat = new Bureaucrat("Lox", 70);
        bureaucrat->UpGrade(100);
        delete bureaucrat;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat *bureaucrat = new Bureaucrat("Chank", 140);
        delete bureaucrat;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        Bureaucrat *bureaucrat = new Bureaucrat("Kink", 1);
        std::cout << *bureaucrat;
        bureaucrat->DownGrade(10);
        delete bureaucrat;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}