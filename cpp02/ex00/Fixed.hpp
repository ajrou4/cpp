#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
private:
    int FixValue;
    static const int fractvalue = 8;
public:
    Fixed();
    Fixed(const Fixed &src);
    Fixed& operator = (const Fixed &src); 
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
};



#endif
