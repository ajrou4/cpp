#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal* meta = new Animal();  
    Animal* j = new Dog();
    Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    // WrongAnimal *C = new WrongCat();
    // std::cout << C->getType() << " " << std::endl;
    // C->makeSound();
    delete meta;
    delete j;
    delete i;
    // delete C;
    return 0;
}

