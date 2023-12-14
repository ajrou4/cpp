#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
protected:
        
public:
        Brain();
        ~Brain();
        Brain(const Brain &src);
        Brain& operator=(const Brain &src);
        std::string ideas[100];
};
#endif