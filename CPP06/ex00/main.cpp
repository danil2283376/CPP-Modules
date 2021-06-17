#include <iostream>
#include <tgmath.h>

void PrintChar(std::string str)
{
    try
    {
        int number = stoi(str);
        if (number < -127 || number > 127)
        {
            std::cout << "char: impossible\n";
            return ;
        }
        else if (number < 32 || number > 126)
        {
            std::cout << "char: Non displayable\n";
            return ;
        }
        std::cout << "char: " << static_cast<char>(number) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "char: impossible\n";
    }
}

void PrintInt(std::string str)
{
    try
    {
        int number = stoi(str);
        std::cout << "int: "<< static_cast<int>(number) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "int: impossible\n";
    }
}

void PrintFloat(std::string str)
{
    try
    {
        float numberFloat = stof(str);
        std::cout << "float: " << static_cast<float>(numberFloat) << "f" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "float: impossible\n";
    }
}

void PrintDouble(std::string str)
{
    try
    {
        double numberDouble = stod(str);
        std::cout << "double: " << static_cast<double>(numberDouble) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "doule: impossible\n";
    }
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error: argument!\n";
        return 1;
    }
    PrintChar(argv[1]);
    PrintInt(argv[1]);
    PrintFloat(argv[1]);
    PrintDouble(argv[1]);
}