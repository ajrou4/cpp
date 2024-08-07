#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : timeList(0), timeVector(0) {}

PmergeMe::PmergeMe(const PmergeMe &src)
    : list(src.list), vector(src.vector), timeList(src.timeList), timeVector(src.timeVector) {}

PmergeMe &PmergeMe::operator=(const PmergeMe &src) {
    if (this != &src) {
        list = src.list;
        vector = src.vector;
        timeList = src.timeList;
        timeVector = src.timeVector;
    }
    return *this;
}

PmergeMe::~PmergeMe() {}
void PmergeMe::checkNUmber(const std::string &str){
    for (unsigned long i = 0; i < str.length(); i++) {
        if (!isdigit(str[i]) && str[i] != '.' && str[i] != '-') {
            throw std::invalid_argument("is not number: " + str);
        }
    }
}
void PmergeMe::handleInput(int ac, char **av) {
    for (int i = 1; i < ac; ++i) {        
        try{
            checkNUmber(av[i]);
             std::istringstream iss(av[i]);
            int n;
            while (iss >> n) {
                if (n <= 0) {
                    std::cerr << "Error: Invalid input\n";
                    exit(EXIT_FAILURE);
                }
                list.push_back(n);
                vector.push_back(n);
            }
        }
        catch (std::invalid_argument &e) {
            std::cerr << "Error: " << e.what() << std::endl;
            exit(EXIT_FAILURE);
        }
    }
}

void PmergeMe::processTime() {
    std::list<int> L = list;
    std::vector<int> V = vector;

    clock_t start, end;

    start = clock();
    mergeInsertSortList(L);
    end = clock();
    timeList = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;

    start = clock();
    mergeInsertSortVector(V);
    end = clock();
    timeVector = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;

    list = L;
    vector = V;
}

void PmergeMe::printResults(int ac, char **av) const {
    std::cout << "Before: ";
    int i = 1;
    for (;i < ac; i++)
        std::cout << av[i] << " ";
    std::cout << std::endl;

    std::cout << "After: ";
    for (std::vector<int>::const_iterator it = vector.begin(); it != vector.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "Time to process a range of "<<i - 1<< " elements with std::vector " << timeVector << "us\n";
    std::cout << "Time to process a range of "<<i - 1  <<" elements with std::list " << timeList << "us\n";
}

void PmergeMe::mergeInsertSortList(std::list<int>& lst) {
    if (lst.size() <= 1) return;
    mergeSortList(lst, lst.begin(), lst.end());
}

void PmergeMe::mergeSortList(std::list<int>& lst, std::list<int>::iterator left, std::list<int>::iterator right) {
    if (std::distance(left, right) <= 1) return;

    std::list<int>::iterator mid = left;
    std::advance(mid, std::distance(left, right) / 2);

    mergeSortList(lst, left, mid);
    mergeSortList(lst, mid, right);
    mergeList( left, mid, right);
}

void PmergeMe::mergeList( std::list<int>::iterator left, std::list<int>::iterator mid, std::list<int>::iterator right) {
    std::list<int> leftList(left, mid);
    std::list<int> rightList(mid, right);

    std::list<int>::iterator it = left;
    std::list<int>::iterator it1 = leftList.begin();
    std::list<int>::iterator it2 = rightList.begin();

    while (it1 != leftList.end() && it2 != rightList.end()) {
        if (*it1 < *it2) {
            *it = *it1;
            ++it1;
        } else {
            *it = *it2;
            ++it2;
        }
        ++it;
    }

    while (it1 != leftList.end()) {
        *it = *it1;
        ++it1;
        ++it;
    }

    while (it2 != rightList.end()) {
        *it = *it2;
        ++it2;
        ++it;
    }
}

void PmergeMe::mergeInsertSortVector(std::vector<int>& vec) {
    if (vec.size() <= 1) return;
    mergeSortVector(vec, 0, vec.size() - 1);
}

void PmergeMe::mergeSortVector(std::vector<int>& vec, int left, int right) {
    if (left >= right) return;
    int mid = left + (right - left) / 2;
    mergeSortVector(vec, left, mid);
    mergeSortVector(vec, mid + 1, right);
    mergeVector(vec, left, mid, right);
}

void PmergeMe::mergeVector(std::vector<int>& vec, int left, int mid, int right) {
    std::vector<int> leftVec(vec.begin() + left, vec.begin() + mid + 1);
    std::vector<int> rightVec(vec.begin() + mid + 1, vec.begin() + right + 1);

    unsigned long i = 0, j = 0;
    int k = left;
    while (i < leftVec.size() && j < rightVec.size()) {
        if (leftVec[i] <= rightVec[j]) {
            vec[k] = leftVec[i];
            i++;
        } else {
            vec[k] = rightVec[j];
            j++;
        }
        k++;
    }
    while (i < leftVec.size()) {
        vec[k] = leftVec[i];
        i++;
        k++;
    }
    while (j < rightVec.size()) {
        vec[k] = rightVec[j];
        j++;
        k++;
    }
}
