#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
    private:
        unsigned int _countNumbers;
        unsigned int _count;
        std::vector<int> _array;
    public:
        class ArrayIsFull : std::exception
        {
            public:
                ArrayIsFull(const char *messageError);
                virtual const char *what() const throw();
            private:
                const char *_messageError;
        };
        Span(unsigned int countNumbers);
        void addNumber(int number);
        int shortestSpan();
        int longestSpan();
};

#endif