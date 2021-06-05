
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:
        ~Fixed();
        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed &copy);
        Fixed &operator=(const Fixed &copy);
        friend std::ostream &operator<<(std::ostream &output, const Fixed &copy);
        void setRawBits(int const raw);
        int  getRawBits(void) const;
        int  toInt(void) const;
        float toFloat(void) const;
    private:
        int fixedPoint;
        static const int fractionalPart = 8;
};

#endif