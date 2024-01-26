#pragma once
#include <iostream>

class Fixed
{
private:
    int number;
    static const int fractionalBits = 8;
public:

        Fixed();
        Fixed(const int num);
        Fixed(const float num);

        Fixed(const Fixed &original);

        ~Fixed();

        Fixed &operator=(const Fixed &other);
        bool operator>(const Fixed &right);
        bool operator<(const Fixed &right);
        bool operator<=(const Fixed &right);
        bool operator>=(const Fixed &right);
        bool operator==(const Fixed &right);
        bool operator!=(const Fixed &right);
        Fixed operator+(const Fixed &right);
        Fixed operator-(const Fixed &right);
        Fixed operator*(const Fixed &right);
        Fixed operator/(const Fixed &right);
        Fixed operator++();
        Fixed operator--();
        Fixed operator++(int);
        Fixed operator--(int);

        float toFloat(void)const;
        int toInt(void)const;
        int	getRawBits(void) const;
		void setRawBits(int const raw);
        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);

};
std::ostream &operator<<(std::ostream &output, const Fixed &obj);
