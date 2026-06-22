#include "Fixed.hpp"


Fixed::Fixed() : rawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::Fixed(const int n) : rawBits(n * 256) 
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) : rawBits(static_cast<int>(roundf(f * 256)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->rawBits = other.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->rawBits;
}

void Fixed::setRawBits(int const raw)
{
    this->rawBits = raw;
}

int Fixed::toInt(void) const
{
    return this->rawBits / 256;
}

float Fixed::toFloat(void) const
{
    return this->rawBits / 256.0f;
}

std::ostream &operator<<(std::ostream &out, Fixed const &f)
{
    out << f.toFloat();
    return out;
}

