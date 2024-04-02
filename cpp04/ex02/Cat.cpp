#include"Cat.hpp"
#include"Brain.hpp"

Cat::Cat(){
    brain = new Brain;
    this->type = "Cat";
    std::cout<<"cat called"<<std::endl;
}
Cat::~Cat(){
    delete brain;
}
Cat ::Cat(const Cat &src){
    *this = src;
}
Cat Cat::operator=(const Cat &src){
    delete brain;
    brain = new Brain;
    this->type = src.type;
    this->brain = src.brain;
    return *this;
}
void Cat::makeSound(){
    std::cout << "meow meow!"<< std::endl;
}
std::string Cat::getType(){
    return type;
}
