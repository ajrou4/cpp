#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <exception>


class Base
{
    public:
        virtual ~Base(){};    
};
class A: public Base
{
    public:
    A();
    ~A();
};  
class B: public Base
{   
        public:
        B();
        ~B();

};

class C: public Base
{   
        public:
        C();
        ~C(); 

};

Base* generate();
void identify(Base* p);
void identify(Base& p);

#endif