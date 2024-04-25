#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <exception>
#include <vector>

template<typename T>
int easyfind(T& par, int val)
{
   typename T::iterator it;
   for(it = par.begin() ; it!= par.end(); it++){
        if(*it == val)
            return val;
   }
   throw std::runtime_error("Value not found!");
}


#endif