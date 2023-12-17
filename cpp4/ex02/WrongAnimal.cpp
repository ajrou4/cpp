#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    this->type = "WrongAnimal";
    std::cout<<"WrongAnimal called"<<std::endl;
}
WrongAnimal::~WrongAnimal(){
    std::cout<< "Goodbey WrongAnimal"<<std::endl;
}
WrongAnimal ::WrongAnimal(const WrongAnimal &src){
    *this = src;
}
WrongAnimal WrongAnimal::operator=(const WrongAnimal &src){
    this->type = src.type;
    return *this;
}
void WrongAnimal::makeSound(){
    std::cout << "WorngAnimal Sound!"<< std::endl;
}