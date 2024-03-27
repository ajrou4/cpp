#include "Data.hpp"

Data::Data():value(0){
}

Data::Data(int value):value(value){
}
Data::Data(const Data &src){
    *this = src;
}
Data &Data::operator=(const Data &src){
    if(this!=&src)
        this->value = src.value;
    return *this;
}
Data::~Data(){}
int Data::get_value()const{
    return value;
}
