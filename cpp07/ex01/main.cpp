#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T>

void coutArray(&T arr)
{
	std::cout << arr << std::endl;
}

int main()
{
	int array[] = {2, 3, 4, 7, 9, 1};
	char cub[] = {'m','a','j','r','o','u'};
	
	double elem[] = {1.1,3.7,8.0,5.6,2.7};
	
	std::cout << "Element array is :"<<std::endl;
	iter(arry, 6, coutArray<int>);
	std::cout << "Element array is :"<<std::endl;
	iter(cub, 6, coutArray<char>);

	std::cout << "Element array is :"<<std::endl;
	iter(elem, 5, coutArray<double>); 
}