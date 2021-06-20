#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

using std::stack;


template<typename T>
class MutantStack : public stack<T>
{
    public:
        MutantStack() : stack<T>(){}
        MutantStack(MutantStack& copyStack) : stack<T>(copyStack) { }
        
        typedef typename stack<T>::container_type::iterator iterator;
        iterator begin()
        {
            return this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }
};

#endif