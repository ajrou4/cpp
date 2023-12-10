#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
    int  FixValue;
    static const int FractValue = 8;
public:
    Fixed();
    Fixed(const int intvalue);
    Fixed(const float floatValue);
    Fixed(const Fixed &src);
    Fixed& operator = (const Fixed &src); 
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
	int toInt(void) const;  
	float toFloat(void) const;
};
    std::ostream& operator << (std:: ostream &out ,const Fixed &Fixed);

#endif
