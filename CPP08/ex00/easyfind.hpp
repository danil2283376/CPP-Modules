#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

class NotFoundElem
{
    public:
        class ElemNotFound : public std::exception
        {
            virtual const char *what() const throw();
        };
};

const char *NotFoundElem::ElemNotFound::what() const throw()
{
    return ("Elem not found!");
}

template<typename T>
int easyfind(T &array, int value)
{
    typename T::const_iterator findElem = std::find(array.begin(), array.end(), value);
    if (findElem == array.end())
        throw NotFoundElem::ElemNotFound();
    return (*findElem);
}

#endif