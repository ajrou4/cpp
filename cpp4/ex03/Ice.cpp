#include"Ice.hpp"

Ice::Ice(): AMateria("ice"){
    type= "ice";
    // std::cout<< getType() <<" say hello !"<< std::endl;
}
Ice::Ice(const Ice &src):AMateria(src.getType()){
    this->type = src.getType();
}
Ice &Ice:: operator=(const Ice &src){
    this->type = src.getType();
    return *this;
}
Ice::~Ice(){
    // std::cout<< this->type << " Say goodbye!" << std::endl;
}
AMateria *Ice:: clone()const{
    return new Ice();
}
void Ice::use(ICharacter &target) {
    std::cout << getType() << ": * shoots an ice bolt at " << target.getName() << "*" << std::endl;
}