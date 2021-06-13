#include "Squad.hpp"

Squad::Squad()
{
    _count = 0;
    _array = nullptr;
}

int Squad::getCount() const
{
    return (this->_count);
}

ISpaceMarine *Squad::getUnit(int index) const
{
    if (index > this->_count)
        return nullptr;
    return (this->_array[index]);
}

int Squad::push(ISpaceMarine *iSpaceMarine)
{
    if (iSpaceMarine == nullptr)
        return (_count);
    if (this->_array == nullptr)
    {
        this->_array = new ISpaceMarine *[1];
        this->_array[0] = iSpaceMarine;
        this->_count = 1;
    }
    else
    {
        for (int i = 0; i < _count; i++)
        {
            if (this->_array[i] == iSpaceMarine)
                return (_count);
        }
        ISpaceMarine **dynamic_array = new ISpaceMarine*[this->_count + 1];
        for (int i = 0; i < this->_count; i++)
            dynamic_array[i] = this->_array[i];
        delete[] this->_array;
        this->_array = dynamic_array;
        this->_array[_count] = iSpaceMarine;
        this->_count++;
    }
    return (this->_count);
}

Squad::~Squad()
{
    if (this->_array != nullptr)
    {
        for (int i = 0; i < this->_count; i++)
            delete this->_array[i];
        delete[] this->_array;
    }
}