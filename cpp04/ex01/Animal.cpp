#include"Animal.hpp"

Animal::Animal(): kbrain(new Brain){
    this->type = "Animal  ";
    std::cout<<"Animel called"<<std::endl;
}
Animal::~Animal(){
    delete kbrain;
}
Animal::Animal(const Animal &src){
    *this = src;
}
Animal Animal::operator =(const Animal &src){
    this->type = src.type;
    return *this;
}
void Animal::makeSound(){
    // std::cout<< "Animal sound "<<std::endl;
}
std::string Animal::getType(){
    return type; 
}