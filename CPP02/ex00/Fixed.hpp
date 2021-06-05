#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &copy);
        Fixed &operator=(const Fixed &copy);
        void setRawBits(int const raw);
        int  getRawBits(void) const;
    private:
        int fixedPoint;
        static const int fractionalPart = 8;
};

#endif