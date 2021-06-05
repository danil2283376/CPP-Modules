#include "Fixed.hpp"

Fixed::Fixed() : fixedPoint(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixedPoint = value << this->fractionalPart;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixedPoint = (roundf(value * (1 << this->fractionalPart)));
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixedPoint = copy.getRawBits();
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
    std::cout << "Assignation operator called" << std::endl;
    this->fixedPoint = copy.getRawBits();
    return (*this);
}

std::ostream &operator<<(std::ostream &output, const Fixed &copy)
{
    output << copy.toFloat();
    return (output);
}

void Fixed::setRawBits(int const raw)
{
    this->fixedPoint = raw;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixedPoint);
}

int Fixed::toInt(void) const
{
    return (this->fixedPoint >> 8);
}

float Fixed::toFloat(void) const 
{
    return (float(this->fixedPoint) / float(1 << 8));
}