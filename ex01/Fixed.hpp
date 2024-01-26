#pragma once
#include <iostream>

class Fixed
{
private:
    int number;
    static const int fractionalBits = 8;
public:
    Fixed();
    Fixed(int number);
    Fixed(float number);
    Fixed(const Fixed &original);
    ~Fixed();
    Fixed &operator=(const Fixed &other);
    float toFloat(void) const;
    int toInt(void) const;
    int getRawBits(void) const;
    void setRawBits(int const raw);

};
std::ostream &operator<<(std::ostream &output, const Fixed &obj);