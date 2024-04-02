#include"Brain.hpp"
#include"Animal.hpp"

Brain::Brain(){
}
Brain::~Brain(){
}
Brain::Brain(const Brain &src){
    *this = src;

}
Brain &Brain::operator =(const Brain &src){
    for(int i=0; i < 100; i++){
        this->ideas[i] = src.ideas[i];
    }
    return *this;
}