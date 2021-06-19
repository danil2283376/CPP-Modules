#include "span.hpp"

Span::Span(unsigned int countNumbers)
{
    this->_countNumbers = countNumbers;
    this->_count = 0;
}

Span::ArrayIsFull::ArrayIsFull(const char *messageError)
{
    this->_messageError = messageError;
}

const char *Span::ArrayIsFull::what() const throw()
{
    return (this->_messageError);
}

void Span::addNumber(int num)
{
    if ((this->_count + 1) > this->_countNumbers)
        throw Span::ArrayIsFull("Array full!");
    this->_array.push_back(num);
    this->_count++;
}

int Span::shortestSpan()
{
    if (_count == 0 || _count == 1)
        throw Span::ArrayIsFull("Element in _array < 2!");
    int minNumber1 = *std::min_element(_array.begin(), _array.end());

    std::vector<int> copyArray(_array);
    copyArray.erase(std::min_element(copyArray.begin(), copyArray.end()));
    int minNumber2 = *std::min_element(copyArray.begin(), copyArray.end());
    return (minNumber2 - minNumber1);
}

int Span::longestSpan()
{
    if (_count == 0 || _count == 1)
        throw Span::ArrayIsFull("Element in _array < 2!");
    int minNumber = *std::min_element(_array.begin(), _array.end());
    int maxNumber = *std::max_element(_array.begin(), _array.end());
    return (maxNumber - minNumber);
}