#include "Fixed.hpp"

Fixed::Fixed() : FixValue(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) : FixValue(src.FixValue){
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed:: operator = (const Fixed &src){
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &src)
	{	
		this->FixValue = src.FixValue ;
	}
	return *this;
}
Fixed::~Fixed(){
	std::cout << "Destructor called"<< std::endl;
}

int Fixed:: getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return FixValue;
}

void Fixed::  setRawBits(int const raw){
	FixValue = raw;
}

