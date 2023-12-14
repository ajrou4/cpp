#include"Dog.hpp"

Dog::Dog(){
    kbrain = new Brain;
    this->type = "Dog";
    std::cout<<"Dog called"<<std::endl;
}
Dog::~Dog(){
    std::cout << "goodbye Dog"<< std::endl;
    delete kbrain;
}
Dog ::Dog(const Dog &src){
    *this = src;
}
Dog Dog::operator=(const Dog &src){
    this->type = src.type;
    return *this;
}
void Dog::makeSound(){
    std::cout << "Woof Woof!"<< std::endl;
}
std::string Dog::getType(){
    return type;
}