#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
template <typename T>

class Array
{
private:
    /* data */
public:
    Array();
    Array(const Array<T> &src);
    Array& operator=(const Array &src);
    ~Array();
};

template <typename T>
Array<T>::Array(){}
template <typename T>
Array<T>::Array(const Array &src){(void)src;}
template <typename T>
Array<T> &Array<T>::operator=(const Array &src){
    (void)src;
    return *this;
}
template <typename T>
Array<T >::~Array(){}


#endif