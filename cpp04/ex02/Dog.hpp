#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>
#include<string>

class Dog : public Animal
{
public:
    Dog();
    ~Dog();
    Dog(const Dog &src);
    Dog operator=(const Dog &src);
    std::string getType();
    void makeSound();
private:
        Brain* kbrain;
};

#endif
