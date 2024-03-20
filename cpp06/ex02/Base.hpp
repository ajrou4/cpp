#ifndef BASE_HPP
#define BASE_HPP
#include "A.hpp"
#include "B.hpp"
#include <iostream>
#include <string>
class Base
{
    Base();
    virtual ~Base();    
    Base* generate();
    void identify(Base* p);
    void identify(Base& p);
};
#endif