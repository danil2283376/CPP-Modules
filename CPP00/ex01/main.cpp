#include "PhoneBook.hpp"

int main() 
{
    int i = 0;
    PhoneBook bookContact;

    while (1) 
    {
        if (i > 8)
        {
            std::cout << "no more than 8 contacts!" << std::endl;
            break ;
        }
        std::string input;
        std::cout << "1) Add contact.\n";
        std::cout << "2) Search contact.\n";
        std::cout << "3) Exit.\n";
        std::cout << "Choice event: ";
        std::cin >> input;
        if (input[0] == 'A' && input[1] == 'D' && input[2] == 'D')
        {
            bookContact.AddContact();
            i++;
        }
        else if (input[0] == 'S' && input[1] == 'E' && input[2] == 'A' && input[3] == 'R' && input[4] == 'C' &&
            input[5] == 'H')
            bookContact.SearchContact();
        else if (input[0] == 'E' && input[1] == 'X' && input[2] == 'I' && input[3] == 'T')
            return (0);
        else
        {
            std::cout << "Try first" << std::endl;
            continue ;
        }
    }
}