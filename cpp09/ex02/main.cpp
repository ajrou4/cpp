#include "PmergeMe.hpp"

int main(int ac, char **av) {
    if (ac < 2) {
        std::cerr << "Usage: ./PmergeMe {positive integers} " << std::endl;
        return 1;
    }

    PmergeMe p;
    p.handleInput(ac, av);
    p.processTime();
    p.printResults(ac, av);

    return 0;
}