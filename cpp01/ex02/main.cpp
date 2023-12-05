#include <iostream>


int main(){
	std::string brain =  "HI THIS IS BRAIN";
	std::string  *brainPTR = &brain;
	std:: string &brainREF = brain;

	std:: cout <<" The memory address of the brain :" << &brain << std::endl;
	std::cout<<" The memory address held by brainPTR : "<< &brainPTR<<std::endl;
	std::cout<<" The memory address held by brainREF:"<<&brainREF<<std::endl;
	std::cout<< std::endl;
	std:: cout <<" The value of the brain variable :" << brain << std::endl;
	std:: cout <<" The value pointed to by brainPTR :" << *brainPTR << std::endl;
	std:: cout <<" The value pointed to by brainREF  :" << brainREF << std::endl;

}
