#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "Animal.hpp"
#include <iostream>
#include<string>

class WrongAnimal : public Animal
{
    public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal(const WrongAnimal &src);
    WrongAnimal operator=(const WrongAnimal &src);
    void makeSound();
};

#endif