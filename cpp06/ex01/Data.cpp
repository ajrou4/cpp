#include "Data.hpp"

Data::Data():value(value){
}

Data::Data(int value):value(value){
}
Data::Data(const Data &src){
    *this = src;
}
Data &Data::operator=(const Data &src){
    if(this!=&src)
        this->value = src.value;
}
Data::~Data(){}
int Data::get_value()const{
    return value;
}
