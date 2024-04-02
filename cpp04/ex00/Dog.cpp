#include"Dog.hpp"

Dog::Dog(){
    this->type = "Dog";
}
Dog::~Dog(){
}
Dog ::Dog(const Dog &src){
    *this = src;
}
Dog &Dog::operator=(const Dog &src){
    this->type = src.type;
    return *this;
}
void Dog::makeSound(){
    std::cout << "Woof Woof!"<< std::endl;
}
std::string Dog::getType(){
    return type;
}