#pragma once
#include <iostream>

class Fixed
{
private:
    int number;
    static const int fractionalBit = 8;
public:
    Fixed();
    ~Fixed();
    Fixed &operator=(const Fixed &other);
    Fixed(const Fixed &original);
    int getRawBits(void) const;
    void setRawBits(int const raw);

};