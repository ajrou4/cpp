#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

int main()
{
    Animal  *C= new Cat();
    Animal  *D= new Dog();
    std::cout << C->getType() << " " << std::endl;
    std::cout << D->getType() << " " << std::endl;
    C->makeSound();
    D->makeSound();
    delete C;
    delete D;
    return 0;
}


