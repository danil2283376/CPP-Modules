#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact _contacts[9];
        int countContacts;
    public:
        PhoneBook();
        void Output();
        void Input(std::string name, std::string number);
        void AddContact();
        void SearchContact();
        void FillingContact(Contact *contact);
        void BriefInfoByContacts();
        void DetailedInformation(int index);
};

#endif