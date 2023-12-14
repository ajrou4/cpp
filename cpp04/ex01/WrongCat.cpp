#include "WrongCat.hpp"
WrongCat::WrongCat(){
    kbrain = new Brain;
    this->type = "WorngCat";
}
WrongCat::~WrongCat(){
    delete kbrain;
}
WrongCat::WrongCat(const WrongCat &src){
    *this = src;
}
WrongCat &WrongCat::operator=(const WrongCat &src){
        this->type =src.type;
        return *this;
}
void WrongCat :: makeSound(){
    std::cout << "meow meow"<< std::endl;
}
std::string WrongCat::getType(){
    return type;
}