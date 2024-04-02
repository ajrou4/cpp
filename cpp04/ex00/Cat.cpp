#include"Cat.hpp"

Cat::Cat(){
    this->type = "Cat";
}
Cat::~Cat(){
}
Cat ::Cat(const Cat &src){
    *this = src;
}
Cat &Cat::operator=(const Cat &src){
    this->type = src.type;
    return *this;
}
void Cat::makeSound(){
    std::cout << "meow meow!"<< std::endl;
}
std::string Cat::getType(){
    return type;
}
