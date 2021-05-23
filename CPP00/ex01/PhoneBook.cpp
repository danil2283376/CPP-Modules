#include "PhoneBook.hpp"

PhoneBook::PhoneBook() 
{
    countContacts = 0;
}

void PhoneBook::AddContact()
{
    FillingContact(&_contacts[countContacts]);
    this->countContacts++;
}

void PhoneBook::DetailedInformation(int index)
{
    std::cout << "First name: " << _contacts[index].firstName << std::endl;
    std::cout << "Last name: " << _contacts[index].lastName << std::endl; 
    std::cout << "Nick name: " << _contacts[index].nickName << std::endl;
    std::cout << "Login: " << _contacts[index].login << std::endl;
    std::cout << "Postal address: " << _contacts[index].postalAddress << std::endl;
    std::cout << "Phone number: " << _contacts[index].phoneNumber << std::endl;
    std::cout << "Birthday date: " << _contacts[index].birthdayDate << std::endl;
    std::cout << "Favorite meal: " << _contacts[index].favoriteMeal << std::endl;
    std::cout << "Underwear color: " << _contacts[index].underwearColor << std::endl;
    std::cout << "Darkest secret: " << _contacts[index].darkestSecret << std::endl;
}

void PhoneBook::BriefInfoByContacts()
{
    std::cout << "index     |first name|last name |nickname  |" << std::endl;
    for (int i = 0; i < this->countContacts; i++) 
    {
        int j = 0;
        std::cout << i << "          ";
        for (; _contacts[i].firstName[j] != '\0'; j++)
        {
            if (j > 9)
            {
                std::cout << ".";
                break ;
            }
            std::cout << _contacts[i].firstName[j];
        }
        if (j < 9)
        {
            while (j < 11)
            {
                std::cout << " ";
                j++;
            }
        }
        j = 0;
        for (; _contacts[i].lastName[j] != '\0'; j++) 
        {
            if (j > 9)
            {
                std::cout << ".";
                break ;
            }
            std::cout << _contacts[i].lastName[j];
        }
        if (j < 9)
        {
            while (j < 11)
            {
                std::cout << " ";
                j++;
            }
        }
        j = 0;
        for (; _contacts[i].nickName[j] != '\0'; j++)
        {
            if (j > 9)
            {
                std::cout << ".";
                break ;
            }
            std::cout << _contacts[i].nickName[j];
        }
        std::cout << std::endl;
    }
    std::cout << "Input index contact: ";
    int index;
    std::cin >> index;
    if (index > countContacts || index < 0)
        std::cout << "There is no such contact!" << std::endl;
    else
        DetailedInformation(index);
}

void PhoneBook::SearchContact()
{
    BriefInfoByContacts();

}

void PhoneBook::FillingContact(Contact *contact)
{
    std::cout << "First name: ";
    std::string firstName;
    std::cin >> firstName;
    contact->firstName = firstName;
    
    std::cout << "Last name: ";
    std::string lastName;
    std::cin >> lastName;
    contact->lastName = lastName;

    std::cout << "Nickname: ";
    std::string nickName;
    std::cin >> nickName;
    contact->nickName = nickName;

    std::cout << "Login: ";
    std::string login;
    std::cin >> login;
    contact->login = login;

    std::cout << "Postal address: ";
    std::string postalAddress;
    std::cin >> postalAddress;
    contact->postalAddress = postalAddress;

    std::cout << "Phone number: ";
    std::string phoneNumber;
    std::cin >> phoneNumber;
    contact->phoneNumber = phoneNumber;

    std::cout << "Favorite meal: ";
    std::string favoriteMeal;
    std::cin >> favoriteMeal;
    contact->favoriteMeal = favoriteMeal;

    std::cout << "Underwear color: ";
    std::string underwearColor;
    std::cin >> underwearColor;
    contact->underwearColor = underwearColor;

    std::cout << "Darkest secret: ";
    std::string darkestSecret;
    std::cin >> darkestSecret;
    contact->darkestSecret = darkestSecret;
}