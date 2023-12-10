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

bool Fixed::operator>(const Fixed &src)const{
    return this->FixValue > src.FixValue;
}
bool Fixed::operator<(const Fixed &src)const{
    return this->FixValue < src.FixValue;
}
bool Fixed::operator>=(const Fixed &src)const{
    return this->FixValue >= src.FixValue;
}
bool Fixed::operator<=(const Fixed &src)const{
    return this->FixValue <= src.FixValue;
}
bool Fixed::operator==(const Fixed &src)const{
    return this->FixValue == src.FixValue;
}
bool Fixed::operator!=(const Fixed &src)const{
    return this->FixValue != src.FixValue;
}
 
Fixed Fixed::operator+(const Fixed &other) const {
    return Fixed(this->toFloat() + other.toFloat());
}
Fixed Fixed::operator-(const Fixed &other) const {
    return Fixed(this->toFloat() - other.toFloat());
}
Fixed Fixed::operator*(const Fixed &other) const {
    return Fixed(this->toFloat() * other.toFloat());
}
Fixed Fixed :: operator /(const Fixed &src)const{
    if(src.toFloat() != 0)
        return Fixed(this->toFloat() / src.toFloat());
    else
        return -1;
}
Fixed &Fixed::operator++() {
    this->FixValue++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed &Fixed::operator--() {
    this->FixValue--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    operator--();
    return tmp;
}
Fixed &Fixed::max(Fixed &a, Fixed &b){
    if(a > b)
        return a;
    else 
        return b;
}
const Fixed &Fixed :: &min(const Fixed &a, const Fixed &b){
    if(a > b)
        return a;
    else 
        return b;
}
Fixed &Fixed::max(Fixed &a, Fixed &b){
    if(a > b)
        return a;
    else 
        return b;
}
const Fixed &Fixed :: &max (const Fixed &a, const Fixed &b){
    if(a > b)
        return a;
    else 
        return b;
}