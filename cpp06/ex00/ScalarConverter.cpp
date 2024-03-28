#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
    // std::cout << "started!"<< std::endl;
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
// bool cheackReast(char *rest){
//     if(rest == NULL || (rest != NULL && rest[0] == 0))
//         return true;
//     return false
// }
void ScalarConverter::toChar(std::string lett)
{
    char *rest = NULL;
    if (lett.size() == 1 && lett[0] > 0 && lett[0] <= 127 && isdigit(lett[0]) == false)
    {
        if(isDisplayable(lett[0]))
        {
            std::cout << "char: '" << lett[0] << "'" << std::endl;
        }
        else
            std::cout<< "char: Non displayable"<<std::endl;
        return ;
    }
    else
    {
        double y =  strtod(lett.c_str(), &rest);
        if (y >= 0 && y <= 127 && (rest == NULL || (rest != NULL && (rest[0] == 0 || rest[0] == 'f'))))
        {
            if(isDisplayable(y))
            {
                std::cout << "char: '" << static_cast<char>(y) << "'" << std::endl;
            }
            else
                std::cout<< "char: Non displayable"<<std::endl;
            return ;
        }
    }
    std::cout << "char: Impossible"<<std::endl;

}
void ScalarConverter::toInt(std::string lett)
{
    double x;
    char *rest = NULL;
    if (lett.size() == 1 && lett[0] > 0 && lett[0] <= 127 && isdigit(lett[0]) == false)
        std::cout << "int: " << static_cast<int>(lett[0]) << std::endl;
    else
    {
        x = std::strtod(lett.c_str(), &rest);
        if((rest == NULL || (rest != NULL && rest[0] == 0)) &&(x >= std::numeric_limits<int>::min() && x <= std::numeric_limits<int>::max()))
            std::cout << "int: " << static_cast<int>(x) <<std::endl;
        else
            std::cout << "int: Impossible"<<std::endl;
    }
}
void ScalarConverter::toFlot(std::string lett){
    double x;
    char *rest = NULL;
    if (lett.size() == 1 && lett[0] > 0 && lett[0] <= 127 && isdigit(lett[0]) == false)
        std::cout << "float: " <<std::fixed << static_cast<float>(lett[0])<<'f'<< std::endl;
    else
    {
        x = std::strtod(lett.c_str(), &rest);
        if((rest == NULL || (rest != NULL && rest[0] == 0)))
            std::cout << "float: " <<std::fixed << static_cast<float>(x)<<"f" <<std::endl;
        else
            std::cout << "float: Impossible"<<std::endl;
    }
}
void ScalarConverter::toDoubel(std::string lett){
    double x;
    char *rest = NULL;
    if (lett.size() == 1 && lett[0] > 0 && lett[0] <= 127 && isdigit(lett[0]) == false)
        std::cout << "doubel: " <<std::fixed << static_cast<double>(lett[0])<< std::endl;
    else
    {
        x = std::strtod(lett.c_str(), &rest);
        if((rest == NULL || (rest != NULL && rest[0] == 0)))
            std::cout << "double: " <<std::fixed << x <<std::endl;
        else
            std::cout << "double: Impossible"<<std::endl;
    }
}
bool ScalarConverter::cheackInf(std::string type){
    if(type == "+inf")
    {
        std::cout << "float: +inf"<<std::endl;
        std::cout << "double: +inf" << std::endl;
        return false;
    }
    if(type == "-inf")
    {
        std::cout << "float: -inff"<<std::endl;
        std::cout << "double: -inf" << std::endl;
        return false;
    }
    if(type == "nan")
    {
        std::cout << "float: nanf"<<std::endl;
        std::cout << "double: nan" << std::endl;
        return false;
    }
    return true;
}
void ScalarConverter::convert(std::string lett)
{
    if(lett.size() > 1 && lett.back() == 'f')
        lett.erase(lett.end()-1);
    toChar(lett);
    toInt(lett);
    toFlot(lett);
    toDoubel(lett);
}
ScalarConverter::~ScalarConverter(){
    // std::cout << "finched!"<< std::endl;
}