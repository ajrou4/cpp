#include <iostream>
#include "iter.hpp" // Include the header file

template <typename T>
void coutArray(T& arr){
    std::cout << arr << std::endl;
}

int main()
{
    int intArray[] = {2, 3, 4, 7, 9, 1};
    char charArray[] = {'m','a','j','r','o','u'};
    double doubleArray[] = {1.1,3.7,8.8,5.6,2.7};

    std::cout << "This is int Array : "<<std::endl;
    iter(intArray, 6, coutArray<int>);

    std::cout << "This is char Array : "<<std::endl;
    iter(charArray, 6, coutArray<char>);

    std::cout << "This is double Array : "<<std::endl;
    iter(doubleArray, 5, coutArray<double>);
    return 0;
}
