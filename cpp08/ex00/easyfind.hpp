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
   it = std::find ( par.begin() , par.end(), val);
   if(it != par.end())
	   return val;
   throw std::runtime_error("Value not found!");
}


#endif
