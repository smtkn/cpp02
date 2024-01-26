#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->number = 0;
}

Fixed::Fixed(const int number) {
   std::cout << "Int constructor called" << std::endl;
   this->number = number * (1 << this->fractionalBits);
}

Fixed::Fixed(const float number) {
    std::cout << "Float constructor called" << std::endl;
    this->number = roundf( number * (1 << this->fractionalBits) );
}

Fixed::Fixed(const Fixed &original) {
    std::cout << "Copy constructor called" << std::endl;
    *this = original;
}

Fixed &Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->number = other.getRawBits();
    return (*this);
}

int Fixed::toInt(void) const {
    return (this->number / (1 << this->fractionalBits));
}

float Fixed::toFloat(void) const {
    return ((float)this->number / (float)(1 << this->fractionalBits));
}

int Fixed::getRawBits(void) const {
    return (number);
}

void Fixed::setRawBits(int const raw) {
    this->number = raw;
}

Fixed::~Fixed() {
    std::cout << "Destructor Called" << std::endl;
}

std::ostream &operator<<(std::ostream &output, const Fixed &obj) {
    output << obj.toFloat();
    return (output);
}