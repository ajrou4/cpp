#include"Animal.hpp"

Animal::Animal(){
    this->type = "Animal  ";
    std::cout<<"Animel called"<<std::endl;
}
Animal::~Animal(){
    std::cout<<"goodbey Animel"<<std::endl;
}
Animal::Animal(const Animal &src){
    *this = src;
}
Animal &Animal::operator =(const Animal &src){
    this->type = src.type;
    return *this;
}

std::string Animal::getType(){
    return type; 
}
