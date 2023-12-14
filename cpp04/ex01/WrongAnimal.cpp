#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    kbrain = new Brain;
    this->type = "WrongAnimal";
    std::cout<<"WrongAnimal called"<<std::endl;
}
WrongAnimal::~WrongAnimal(){
    delete kbrain;
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
    std::cout << "WorngSound!"<< std::endl;
}