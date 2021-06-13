#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim
{
    private:
        std::string name;
    public:
        Victim(std::string name);
        ~Victim();
        virtual void getPolymorphed() const;
        std::string GetName() const;
};

std::ostream &operator<<(std::ostream &ost, Victim &copy);

#endif