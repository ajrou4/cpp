#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

int main_1()
{
    int size = 10;
    Animal* array[size];
  
    for(int i = 0; i < size / 2; i++)
    {
        array[i] = new Dog();
    }
    for(int i = size/2; i < size; i++){
        array[i] = new Cat();
    }
    for(int i = 0; i < size; i++)
    {
        delete array[i];
    }

    return 0;
}

int main()
{
    main_1();
    system("leaks -q main");

}


