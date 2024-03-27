#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
}
ScalarConverter::ScalarConverter(const ScalarConverter &src){
    (void)src;
}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &src){
    (void)src;
    return *this;
}

bool ScalarConverter::isDisplayable(char c)
{
    if(c >= 32 && c <= 126 )
        return true;
    return false;
}
void ScalarConverter::toChar(std::string lett)
{
    int x;
    char c;
    std::stringstream str(lett);
    if(!(str >> x))
    {
        return;
        std::cout << "char: impossible" <<std::endl;
    }
    else(if)
}

void ScalarConverter::convert(std::string lett)
{
}
ScalarConverter::~ScalarConverter(){
    // std::cout << "finched!"<< std::endl;
}