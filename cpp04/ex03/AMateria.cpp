#include "AMateria.hpp"

AMateria:: AMateria(std::string const &type){
    (void) type;
}
AMateria::~AMateria(){
}
AMateria::AMateria(const AMateria &src){
    (void) src;
} 
// AMateria &AMateria:: operator=(const AMateria &src){
// }
std::string const &AMateria::getType()const{
    return type;
}
void AMateria::use(ICharacter &target){
    (void) target;
}
