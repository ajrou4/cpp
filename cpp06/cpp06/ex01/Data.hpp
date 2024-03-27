#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <string>

class Data
{
    public:
            Data();
            Data(int value);
            Data(const Data &src);
            Data& operator=(const Data &src);
            ~Data();
            int get_value()const;
    private:
            int value;
};

#endif