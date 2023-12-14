#include"Cat.hpp"
#include"Brain.hpp"

Cat::Cat(){
    kbrain = new Brain;
    this->type = "Cat";
    std::cout<<"cat called"<<std::endl;
}
Cat::~Cat(){
    delete kbrain;
}
Cat ::Cat(const Cat &src){
    *this = src;
}
Cat Cat::operator=(const Cat &src){
    this->type = src.type;
    return *this;
}
void Cat::makeSound(){
    std::cout << "meow meow!"<< std::endl;
}
std::string Cat::getType(){
    return type;
}
