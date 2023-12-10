#include "Fixed.hpp"

Fixed::Fixed() : FixValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intValue) : FixValue(intValue << FractValue){
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatValue) : FixValue ( roundf(floatValue * (1 << FractValue))){
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) : FixValue(src.FixValue) {
    std::cout << "Copy constructor called" << std::endl;
}
Fixed &Fixed::operator=(const Fixed &src) {
    if (this != &src) {
        this->FixValue = src.FixValue;
        std::cout << "Copy assignment operator called" << std::endl;
    }
    return *this;
}
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw) {
    FixValue = raw;
}

float Fixed::toFloat(void) const {
    return static_cast<float>(FixValue) / (1 << FractValue);
}

int Fixed::toInt(void) const {
    return FixValue >> FractValue;
}
std::ostream &operator << (std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}
