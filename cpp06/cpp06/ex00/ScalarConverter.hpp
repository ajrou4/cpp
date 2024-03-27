#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <sstream>

class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &src);
        ScalarConverter& operator=(const ScalarConverter &src);    
        ~ScalarConverter();
    public:
        static void convert(std::string lett);
        static bool isDisplayable(char c);
        static void cheackInf();
        static void toChar(std::string lett);
        static void toInt(std::string lett);
        static void toFlot(std::string lett);
        static void toDoubel(std::string lett);


};
#endif 