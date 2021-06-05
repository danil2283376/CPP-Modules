#include <string>
#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";

    std::string &ref = str; // не создает ячейку в памяти ссылаясь на str
    std::string *ptr = &str; // создает ячейку в памяти ссылаясь на str

    std::cout << ref << std::endl;
    std::cout << *ptr << std::endl;
}