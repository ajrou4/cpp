#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>
#include <string>
#include "Data.hpp"


class Serialize
{
    public:
            Serialize();
            Serialize(const Serialize &src);
            Serialize& operator=(const Serialize &rhs);
            ~Serialize();
            uintptr_t serialize(Data* ptr);
            Data* deserialize(uintptr_t raw);

};
#endif