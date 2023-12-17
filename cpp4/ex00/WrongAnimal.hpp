#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "Animal.hpp"
#include <iostream>
#include<string>

class WrongAnimal 
{
    protected:
        std::string type;
    public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal(const WrongAnimal &src);
    WrongAnimal& operator=(const WrongAnimal &src);
    void makeSound();
    std::string getType();
};

#endif