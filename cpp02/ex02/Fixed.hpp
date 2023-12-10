#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>
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
            Fixed& operator=(const Fixed &src); 
            ~Fixed();
            int getRawBits(void) const;
            void setRawBits(int const raw);
	        int toInt(void) const;  
	        float toFloat(void) const;
            bool operator>(const Fixed &src)const;
            bool operator<(const Fixed &src)const;
            bool operator>=(const Fixed &src)const;
            bool operator<=(const Fixed &src)const;
            bool operator==(const Fixed &src)const;
            bool operator!=(const Fixed &src)const;
            Fixed operator +(const Fixed &src)const;
            Fixed operator -(const Fixed &src)const;
            Fixed operator *(const Fixed &src)const;
            Fixed operator /(const Fixed &src)const;
            Fixed &operator++();    
            Fixed operator++(int);  
            Fixed &operator--();    
            Fixed operator--(int);  
            static Fixed &min(Fixed &a, Fixed &b);
            static const Fixed &min(const Fixed &a, const Fixed &b);
            static Fixed &max(Fixed &a, Fixed &b);
            static const Fixed &max(const Fixed &a, const Fixed &b);
            friend std::ostream& operator << (std:: ostream &out ,const Fixed &Fixed);
};

#endif