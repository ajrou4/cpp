#include"Animal.hpp"

Animal::Animal(){
    this->type = "Animal  ";
    std::cout<<"Animal called"<<std::endl;
}
Animal::~Animal(){
}
Animal::Animal(const Animal &src){
    *this = src;
}
Animal Animal::operator =(const Animal &src){
    this->type = src.type;
    return *this;
}
void Animal::makeSound(){
    std::cout<< "Animal sound "<<std::endl;
}
std::string Animal::getType(){
    return type; 
}
