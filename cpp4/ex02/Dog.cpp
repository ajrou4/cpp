#include"Dog.hpp"

Dog::Dog(){
    brain = new Brain;
    this->type = "Dog";
    std::cout<<"Dog called"<<std::endl;
}
Dog::~Dog(){
    std::cout << "goodbye Dog"<< std::endl;
    delete brain;
}
Dog ::Dog(const Dog &src){
    *this = src;
}
Dog Dog::operator=(const Dog &src){
    delete brain;
    brain = new Brain;
    this->type = src.type;
    this->brain = src.brain;
    return *this;
}
void Dog::makeSound(){
    std::cout << "Woof Woof!"<< std::endl;
}
std::string Dog::getType(){
    return type;
}