#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &obj) {
    stack = obj.stack;
}

RPN &RPN::operator=(const RPN &obj) {
    if (this != &obj) {
        stack = obj.stack;
    }
    return *this;
}
RPN::~RPN() {}

void RPN::processLine(const std::string &line)  {
    std::istringstream iss(line);
    std::string token;
    while (iss >> token) {
        processToken(token);
    }
}
void RPN::checkNUmber(const std::string &token){
    for (unsigned long i = 0; i < token.length(); i++) {
        if (!isdigit(token[i]) && token[i] != '.' && token[i] != '-') {
            throw std::invalid_argument("is not number: " + token);
        }
    }
}

bool RPN::is_single_digit(const std::string& str){
    return str.size() == 1 && isdigit(str[0]);
}


void RPN::processToken(const std::string &token)  {
    if (isOperator(token)) {
        processOperator(token);
    } else {
        checkNUmber(token);
        if(!is_single_digit(token)){
            throw std::invalid_argument("This's not single digit : " + token);
        }
        double value;
        std::istringstream iss(token);
        if (iss >> value) {
            stack.push(value);
        } else {
            throw std::invalid_argument("Invalid token:" + token);
        }
    }
}

bool RPN::isOperator(const std::string &op) const {
    return op == "+" || op == "-" || op == "*" || op == "/" || op == "%" || op == "^";
}

void RPN::processOperator(const std::string &op)  {
    if (stack.size() < 2) {
        throw std::invalid_argument("Not enough operands for operator: " + op);
    }
    double rhs = stack.top();
    stack.pop();
    double lhs = stack.top();
    stack.pop();
    double result;
    if (op == "+") {
        result = lhs + rhs;
    } else if (op == "-") {
        result = lhs - rhs;
    } else if (op == "*") {
        result = lhs * rhs;
    } else if (op == "/") {
        if (rhs == 0) {
            throw std::invalid_argument("Division by zero");
        }
        result = lhs / rhs;
    }else if(op == "%"){
        result = fmod(lhs, rhs);
    }else if(op == "^"){
        result = pow(lhs, rhs);
     }else {
        throw std::invalid_argument("Invalid operator: " + op);
    }
    stack.push(result);
}

void  RPN::evaluate() {
    if (stack.size() != 1) {
        throw std::invalid_argument("Invalid expression");
    }
std::cout << stack.top() << std::endl;
}

void RPN::clear() {
    while (!stack.empty()) {
        stack.pop();
    }
}
