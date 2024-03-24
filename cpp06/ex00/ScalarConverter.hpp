#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>

class ScalarConverter
{
    private:
    ScalarConverter();
    public:
    ScalarConverter(const ScalarConverter &src);
    ScalarConverter& operator=(const ScalarConverter &src);    
    ~ScalarConverter();
    static void convert(std::string literal);

};
#endif 