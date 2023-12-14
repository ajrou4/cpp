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
    WrongAnimal* s = new WrongAnimal();
    WrongAnimal *c = new WrongCat();
    std::cout <<s->getType() << " " << std::endl;
    std::cout << c->getType() << " " << std::endl;
    s->makeSound();
    c->makeSound();
    return 0;
}
