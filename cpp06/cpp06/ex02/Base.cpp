#include "Base.hpp"

A::A(){}
A::~A(){}
B::B(){}
B::~B(){}
C::C(){}
C::~C(){}

Base *generate()
{
    srand(time(0));
    int choice = rand()% 3;
    switch (choice)
    {
        case 0:
            return  new A();
        case 1:
            return  new B();
        case 2:
            return  new C();
        default:
            return nullptr;
    }
}

void identify(Base* p){
    if( dynamic_cast<A*> (p))
        std::cout << "A"<<std::endl;
    else if( dynamic_cast<B*> (p))
        std::cout << "B"<<std::endl;
    else if( dynamic_cast<C*> (p))
        std::cout << "C"<<std::endl;
}
void identify(Base& p){
        if( dynamic_cast<A*> (&p))
        std::cout << "A"<<std::endl;
    else if( dynamic_cast<B*> (&p))
        std::cout << "B"<<std::endl;
    else if( dynamic_cast<C*> (&p))
        std::cout << "C"<<std::endl;
}