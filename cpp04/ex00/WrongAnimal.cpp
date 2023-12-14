#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    this->type = "WrongAnimal";
}
WrongAnimal::~WrongAnimal(){
}
WrongAnimal ::WrongAnimal(const WrongAnimal &src){
    *this = src;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src){
    this->type = src.type;
    return *this;
}
std::string WrongAnimal::getType(){
    return type;
}
void WrongAnimal::makeSound(){
    std::cout << "WorngSound Animel!"<< std::endl;
}