#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include<string>
#include <exception>
#include <algorithm>
#include <vector>

class Span
{
    private:
        unsigned int maxSize;
        std::vector<int> element;
    public:
        Span():maxSize(0){}
        Span(unsigned int N):maxSize(N){}
        Span(const Span &src){
            *this = src;
        }
        Span& operator=(const Span &src){
            if(this != &src)
                this->maxSize = src.maxSize;
                this->element.assign(src.element.begin(), src.element.end());
            return *this;
        }
        void addNumber(unsigned int N){
            if(element.size() >= maxSize)
                throw std::runtime_error("Span is full");
            element.push_back(N);
        }
		void addNumber(const std::vector<int>& numbers)
        {
			if(element.size() + numbers.size() > maxSize)
			   throw std::runtime_error("Span is full");
			element.insert(element.end(), numbers.begin(), numbers.end());	
		}
        int shortestSpan()
        {
            if(element.size() <= 1)
                throw std::runtime_error("The maximum size of the span is less than 1 or equal\n");
            std::sort(element.begin(),element.end());
            int minispan = element[1] - element[0];
            for(size_t  i = 2 ; i < element.size() ; i++)
            {
                int vec =  element[i] - element[i -1];
                if(vec < minispan)
                    minispan = vec;
            }
            return minispan;
        }
        int longestSpan()
        {
            if(element.size() <= 1)
                throw std::runtime_error(" The size of the span is less than 1 or equal..\n");
            std::vector <int>::iterator minit = std::min_element(element.begin(), element.end());
            std::vector <int>::iterator maxit = std::max_element(element.begin(), element.end());
            return *maxit - *minit;
        }

};

#endif
