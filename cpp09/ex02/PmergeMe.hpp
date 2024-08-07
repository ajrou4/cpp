#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <sstream>
#include <ctime>

class PmergeMe {
private:
    std::list<int> list;
    std::vector<int> vector;
    double timeList;
    double timeVector;

    void mergeInsertSortList(std::list<int>& lst);
    void mergeInsertSortVector(std::vector<int>& vec);

    void mergeSortList(std::list<int>& lst, std::list<int>::iterator left, std::list<int>::iterator right);
    void mergeSortVector(std::vector<int>& vec, int left, int right);

    void mergeList( std::list<int>::iterator left, std::list<int>::iterator mid, std::list<int>::iterator right);
    void mergeVector(std::vector<int>& vec, int left, int mid, int right);

public:
    PmergeMe();
    PmergeMe(const PmergeMe &src);
    PmergeMe &operator=(const PmergeMe &src);
    ~PmergeMe();
    void  checkNUmber(const std::string &str);
    void handleInput(int ac, char **av);
    void processTime();
    void printResults(int ac, char **av) const;
};

#endif