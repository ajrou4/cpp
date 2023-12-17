#include "Cure.hpp"

Cure::Cure(): AMateria("Cure"){
    type= "cure";
    // std::cout<< getType() <<" say hello !"<< std::endl;
}
Cure::Cure(const Cure &src):AMateria(src.getType()){
    this->type = src.getType();
}
Cure &Cure:: operator=(const Cure &src){
    this->type = src.getType();
    return *this;
}
Cure::~Cure(){
    // std::cout<< this->type << " Say goodbye!" << std::endl;
}
AMateria *Cure:: clone()const{
    return new Cure();
}
void Cure::use(ICharacter &target) {
    std::cout << getType() << ": * heals " << target.getName() << "’s wounds *"<< std::endl;
}