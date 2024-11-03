#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout <<"Short Span: " << sp.shortestSpan() << std::endl;
    std::cout <<"Long Span:  "<< sp.longestSpan() << std::endl;
	std::cout << "---------------------------------------------------------"<<std::endl;
	Span SN = Span(5);
    int arr[] = {6, 3, 17, 9, 11};

	SN.addNumber(std::vector<int>(arr,arr+ (sizeof(arr) / sizeof(arr[0]))));
	std::cout <<"Short Span: " << SN.shortestSpan() << std::endl;
    std::cout <<"Long Span:  "<< SN.longestSpan() << std::endl;
    return 0;
}
