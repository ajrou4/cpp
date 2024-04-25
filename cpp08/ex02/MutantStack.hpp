#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <deque>
#include <stack>
#include <iostream>
#include <string>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
    typedef typename Container::iterator iterator;
    MutantStack() {}
    MutantStack(const MutantStack &src)
    {
        (void)src;
    }
    MutantStack &operator=(const MutantStack &src)
    {
        (void)src;
        return *this;
    }
    ~MutantStack() {}


    iterator begin()
    {
        return this->c.begin();
    }
    iterator end()
    {
        return this->c.end();
    }
};

#endif