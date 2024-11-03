#include "MutantStack.hpp"

int main_subject()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    // [...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}

int my_main()
{
    MutantStack<int> mstack;
    mstack.push(2);
    mstack.push(17);
    std::cout <<"top stack is :" << mstack.top() << std::endl;
    mstack.pop();
    std::cout <<"size of stack :"<<mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(15);
    mstack.push(737);
    mstack.push(90);
    mstack.push(85);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::cout << "-----------------Reverse-----------------" << std::endl;
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    ++rit;
    --rit;
    while (rit != rite)
    {
    std::cout << *rit << std::endl;
    ++rit;
    }
    std::stack<int> s(mstack);
    return 0;
}
int my_main2(){
     MutantStack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    std::cout << "Top element: " << intStack.top() << std::endl;
    intStack.pop();
    std::cout << "Top element after pop: " << intStack.top() << std::endl;
    std::cout << "Stack size: " << intStack.size() << std::endl;

    std::cout << "Elements in the stack (forward iteration):" << std::endl;
    for (MutantStack<int>::iterator it = intStack.begin(); it != intStack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Elements in the stack (reverse iteration):" << std::endl;
    for (MutantStack<int>::reverse_iterator rit = intStack.rbegin(); rit != intStack.rend(); ++rit) {
        std::cout << *rit << " ";
    }
    std::cout << std::endl;

    // Test with const iterators!
    std::cout << "Elements in the stack (const forward iteration):" << std::endl;
    for (MutantStack<int>::const_iterator cit = intStack.begin(); cit != intStack.end(); ++cit) {
        std::cout << *cit << " ";
    }
    std::cout << std::endl;

    std::cout << "Elements in the stack (const reverse iteration):" << std::endl;
    for (MutantStack<int>::const_reverse_iterator crit = intStack.rbegin(); crit != intStack.rend(); ++crit) {
        std::cout << *crit << " ";
    }
    std::cout << std::endl;

    // Test with different types like std::string :)
    MutantStack<std::string> stringStack;
    stringStack.push("Rouina");
    stringStack.push("ou");
    stringStack.push("Belbala");

    std::cout << "String stack elements:" <<std::endl;
    std::cout << "* ";
    for (MutantStack<std::string>::iterator it = stringStack.begin(); it != stringStack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout <<"*"<<std::endl;
    std::cout << std::endl;
    return 0;
}

int main()
{
    // main_subject();
    // std::cout<<"Welcome in my main"<<std::endl;
    // my_main();
    my_main2();
    return 0;
}