#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>

template <typename T>
class Array
{
private:
    T* ptr;
    unsigned int  _size;
public:
    Array(): ptr(NULL),_size(0){}
    Array(unsigned int n){
        _size = n;
        ptr = new T[_size];
    }
    Array(const Array &src){
        _size = src._size;
        ptr = new T[_size];
        for(unsigned int i =0; i < _size; i++)
            ptr[i] = src.ptr[i];
    }

    Array& operator=(const Array &src){
        if(this != &src)
        {
            delete[] ptr;
            _size = src._size;
            ptr = new T[_size];
            for(unsigned int i =0; i < _size; i++)
                ptr[i] = src.ptr[i];
        }
        return *this;
    }
    ~Array(){
        delete[] ptr;
    }
    T& operator[](unsigned int index){
        if(_size <= index)
        {
            throw std::out_of_range ("out of range");
        }
        return ptr[index];
    }
    unsigned int size() const{
        return _size;
    }
};



#endif
