#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdlib.h> 

template<typename T>
class Array
{
    private:
        T *array;
        unsigned int size;
    public:
        Array();
        Array(unsigned int size);
        Array(Array &array);
        Array<T> &operator=(const Array &copy);
        // class IndexOutsideArray : std::exception
        // {
        //     virtual const char *what() const throw();
        // };
        class OutsideArray : public std::exception 
        {
		    virtual const char* what() const throw();
	    };
        T& operator[](unsigned int index);
        unsigned int Size();
        ~Array();
};

template<typename T>
Array<T>::Array()
{
    this->size = 0;
    this->array = nullptr;
}

template<typename T>
Array<T>::Array(unsigned int size)
{
    this->size = size;
    this->array = new T[size]();
}

template<typename T>
Array<T>::Array(Array &copy)
{
    this->size = copy.size;
	if (!copy.size)
		return ;
	this->array = new T[this->size]();
	for (unsigned int i = 0; i < this->size; i++) {
		array[i] = copy.array[i];
	}
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &array)
{
    if (this->array)
        delete[] this->array;
    this->array = nullptr;
    this->size = array.size;
    if (this->size > 0)
    {
        T *newArray = new T[array.size]();
        for (unsigned int i = 0; i < array.size; i++)
            newArray[i] = array.array[i];
        this->array = newArray;
    }
    return *this;
}

template<typename T>
const char* Array<T>::OutsideArray::what() const throw() 
{
	return ("OutsideArray!!!");
}

// template<typename T>
// const char *Array<T>::IndexOutsideArray::what() const throw()
// {
//     std::cout << "I here4\n";
//     return ("IndexOutsideArray!!!");
// }

template<typename T>
T &Array<T>::operator[](unsigned int index)
{
   	if (index > this->size)
		throw Array::OutsideArray();
	return this->array[index];
}

template<typename T>
unsigned int Array<T>::Size()
{
    return (this->size);
}

template<typename T>
Array<T>::~Array()
{
    if (this->array != nullptr)
        delete[] this->array;
}
#endif