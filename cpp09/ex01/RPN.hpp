#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>
#include <stdexcept>
#include <string>
#include <cmath>


class RPN {
    public:
        RPN();
        RPN(const RPN &obj);
        RPN &operator=(const RPN &obj);
        ~RPN();
        void processLine(const std::string &line);
        void evaluate();
        void clear();
    private:
        std::stack<double> stack;
        void processToken(const std::string &token) ;
        void processOperator(const std::string &op) ;
        bool isOperator(const std::string &op) const;
};


#endif